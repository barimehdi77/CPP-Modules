/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:43:40 by mbari       #+#    #+#             */
/*   Updated: 2023/06/05 12:43:41 by mbari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _Data;
	public:
		BitcoinExchange();
		// BitcoinExchange( std::string filePath );
		BitcoinExchange( const BitcoinExchange & src );
		~BitcoinExchange();

		BitcoinExchange & operator = ( const BitcoinExchange & rhs );
		std::map<std::string, double> getData() const;

		void parseDataFile();
		void parseInputFile(std::string fileName);
		bool validateDate(int year, int month, int day);
		bool isLeap(int year);
		double bitcoinConverter(std::string date, double value);

};
