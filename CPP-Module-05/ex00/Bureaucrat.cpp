/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:04:48 by mbari             #+#    #+#             */
/*   Updated: 2021/10/26 18:38:21 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const std::string Name, int Grade ): _Name(Name)
{
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = Grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _Name(src._Name)
{ *this = src; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_Grade = rhs._Grade;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}

std::string	Bureaucrat::getName() const { return (this->_Name); }

unsigned int	Bureaucrat::getGrage() const { return (this->_Grade); }

void	Bureaucrat::GradeDecrement()
{
	if (this->_Grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_Grade++;
}

void	Bureaucrat::GardeIncrement()
{
	if (this->_Grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_Grade--;
}

std::ostream& operator<<( std::ostream& os, Bureaucrat& brc )
{
	os << brc.getName() << ", bureaucrat grade " << brc.getGrage() << std::endl;
	return (os);
}
