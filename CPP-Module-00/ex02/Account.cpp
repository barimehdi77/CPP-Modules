/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:50:16 by mbari             #+#    #+#             */
/*   Updated: 2021/09/17 18:32:43 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <sstream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

int Account::getNbAccounts( void ) { return (_nbAccounts); }
int Account::getTotalAmount( void ) { return (_totalAmount); }
int Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void Account::_displayTimestamp( void )
{
	std::time_t	t = std::time(0);
	std::tm * now = std::localtime(&t);

	std::stringstream year;
	year << now->tm_year + 1900;
	std::string syear;
	year >> syear;

	std::stringstream month;
	if (now->tm_mon < 10)
		month << "0" << now->tm_mon;
	else
		month << now->tm_mon;
	std::string smonth;
	month >> smonth;

	std::stringstream day;
	if (now->tm_mday < 10)
		day << "0" << now->tm_mday;
	else
		day << now->tm_mday;
	std::string sday;
	day >> sday;

	std::stringstream hour;
	if (now->tm_hour < 10)
		hour << "0" << now->tm_hour;
	else
		hour << now->tm_hour;
	std::string shour;
	hour >> shour;

	std::stringstream min;
	if (now->tm_min < 10)
		min << "0" << now->tm_min;
	else
		min << now->tm_min;
	std::string smin;
	min >> smin;

	std::stringstream sec;
	if (now->tm_sec < 10)
		sec << "0" << now->tm_sec;
	else
		sec << now->tm_sec;
	std::string ssec;
	sec >> ssec;

	std::cout << "[" << syear << smonth << sday << "_" << shour << smin << sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:"
			<< getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int new_amount = this->_amount + deposit;
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
		<< ";deposit:" << deposit << ";amount:" << new_amount
		<< ";nb_deposits:" <<this->_nbDeposits << std::endl;
	this->_amount = new_amount;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
			<< ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		int new_amount = this->_amount - withdrawal;
		this->_nbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount
			<< ";withdrawal:" << withdrawal << ";amount:" << new_amount
			<< ";nb_withdrawals:" <<this->_nbWithdrawals << std::endl;
		this->_amount = new_amount;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return (true);
	}
}
