#include "./BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// throw BitcoinExchange::ArgsError();
	// std::string line;

	// std::ifstream dataFile("data.csv");

	// while (getline(dataFile, line))
	// {
	// 	// Output the text from the file
	// 	std::cout << line;
	// }
	// dataFile.close();
}

// BitcoinExchange::BitcoinExchange(std::string filePath)
// {
// 	std::string line;

// 	ifstream dataFile(filePath);

// 	while (getline(dataFile, myText))
// 	{
// 		// Output the text from the file
// 		cout << myText;
// 	}
// 	dataFile.close;
// 	// throw BitcoinExchange::ArgsError();
// }

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

const char *BitcoinExchange::ArgsError::what() const throw()
{
	return ("bit: No file!");
}

std::map<std::string, double> BitcoinExchange::getData() const { return (this->_Data); }


void BitcoinExchange::parseFile()
{
	std::string line;
	bool firstLine = false;

	std::ifstream dataFile("data.csv");

	while (getline(dataFile, line))
	{
		// Output the text from the file
		if (firstLine) {
			// std::cout << line.substr(0, line.find(',')) + " | " + line.substr(line.find(',') + 1, line.length()) << std::endl;
			_Data.insert(std::pair<std::string, double>(line.substr(0, line.find(',')), std::stod(line.substr(line.find(',') + 1, line.length()))));
		}
		else
			firstLine = true;
	}
	std::cout << _Data.size() << std::endl;
	dataFile.close();
}
