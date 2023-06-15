/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:11:53 by barimehdi77       #+#    #+#             */
/*   Updated: 2023/06/14 17:15:25 by barimehdi77      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) : _Data(src._Data)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_Data = rhs._Data;
	return (*this);
}

std::map<std::string, double> BitcoinExchange::getData() const { return (this->_Data); }


void BitcoinExchange::parseDataFile()
{
	std::string line;
	bool firstLine = false;

	std::ifstream dataFile("data.csv");

	while (getline(dataFile, line))
	{
		if (firstLine) {
			_Data.insert(std::pair<std::string, double>(line.substr(0, line.find(',')), std::stod(line.substr(line.find(',') + 1, line.length()))));
		}
		else
			firstLine = true;
	}
	dataFile.close();
}

void BitcoinExchange::parseInputFile(std::string fileName)
{
	std::string line;
	bool firstLine = false;
	std::ifstream dataFile(fileName);

	if (!dataFile.is_open()) {
		std::cout << "Error: could not open file." << std::endl;
		return ;
	}

	while (getline(dataFile, line))
	{
		if (firstLine)
		{
			std::string date;
			std::string year;
			std::string month;
			std::string day;
			std::string value;

			size_t del = line.find('|');

			if (del == std::string::npos) {
				std::cout << "Error: bad input => " + line << std::endl;
				continue;
			}

			date = line.substr(0, del);
			value = line.substr(del + 2, line.length());

			year = date.substr(0, date.find('-'));
			date.erase(date.begin(), date.begin() + date.find('-') + 1);
			month = date.substr(0, date.find('-'));
			date.erase(date.begin(), date.begin() + date.find('-') + 1);
			day = date.substr(0, date.length());
			date = line.substr(0, del);
			date.pop_back();
			if (this->validateDate(std::stoi(year), std::stoi(month), std::stoi(day))) {
				double totalValue = this->bitcoinConverter(date, std::stod(value));
				if (totalValue == -1) {
					std::cout << "Error: not a positive number" << std::endl;
				} else if (totalValue == -2) {
					std::cout << "Error: too large number" << std::endl;
				} else {
					std::cout << date + " => " + value + " = " << totalValue << std::endl;
				}
			} else {
				std::cout << "Error: bad input => " + date << std::endl;
			}
		} else {
			firstLine = true;
		}
	}

}


bool BitcoinExchange::validateDate(int year, int month, int day) {
	if (year < 1800 || year > 3000) return false;
	if (day < 1 || day > 31) return false;
	if (month == 2)
	{
		if (isLeap(year))
			return (day <= 29);
		else
			return (day <= 28);
	}
	if (month == 4 || month == 6 ||
			month == 9 || month == 11)
		return (day <= 30);
	return true;
}


bool BitcoinExchange::isLeap(int year)
{
	return (((year % 4 == 0) &&
			(year % 100 != 0)) ||
			(year % 400 == 0));
}


double BitcoinExchange::bitcoinConverter(std::string date, double value) {
	if (value < 0) {
		return -1;
	} else if (value > 1000) {
		return -2;
	} else {
		std::map<std::string, double>::iterator it = _Data.lower_bound(date);
		if (it != _Data.begin() && it->first != date)
			it--;
		return value * it->second;
	}
}
