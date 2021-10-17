/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:04:48 by mbari             #+#    #+#             */
/*   Updated: 2021/10/17 16:19:32 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string Name, int Grade )
{
	this->_Name = Name;
	if (Grade < 1)
		throw "Bureaucrat::GradeTooHighException";
	else if (Grade > 150)
		throw "Bureaucrat::GradeTooLowException";
	else
		this->_Grade = Grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Distructor called" << std::endl;
}

std::string	Bureaucrat::getName() { return (this->_Name); }

unsigned int	Bureaucrat::getGrage() { return (this->_Grade); }

void	Bureaucrat::GradeDecrement()
{
	if (this->_Grade == 150)
		throw "Bureaucrat::GradeTooLowException";
	this->_Grade++;
}

void	Bureaucrat::GardeIncrement()
{
	if (this->_Grade == 1)
		throw "Bureaucrat::GradeTooHighException";
	this->_Grade--;
}
