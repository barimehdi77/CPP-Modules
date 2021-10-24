/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:04:48 by mbari             #+#    #+#             */
/*   Updated: 2021/10/24 13:47:57 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const std::string Name, int Grade )
{
	this->_Name = Name;
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = Grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) { *this = src; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_Name = rhs._Name;
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

void	Bureaucrat::singForm( Form & form )
{
	if (this->_Grade <= form.getReqGradeToSign())
		std::cout << this->_Name << " sings " << form.getName() << std::endl;
	else
		std::cout << this->_Name << " cannot sign " << form.getName() << " because The form need garde "
			<< form.getReqGradeToSign() << " to be signed" << std::endl;
}

void	Bureaucrat::executeForm( Form const & form )
{
	if (form.getReqGradeToExecute() < this->_Grade)
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_Name << " executes " << form.getName() << std::endl;
}

std::ostream& operator<<( std::ostream& os, Bureaucrat& brc )
{
	os << brc.getName() << ", bureaucrat grade " << brc.getGrage() << std::endl;
	return (os);
}
