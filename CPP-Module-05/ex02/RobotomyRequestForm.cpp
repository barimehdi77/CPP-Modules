/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:47:28 by mbari             #+#    #+#             */
/*   Updated: 2021/10/23 19:50:48 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

std::string const RobotomyRequestForm::Name = std::string("Robotomy Request");

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( std::string target ):
	Form(RobotomyRequestForm::Name, 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form(src) {}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	Form::operator=(rhs);
	return (*this);
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return ("RobotomyRequestFormException: Form Grade is too Low");
}

const char* RobotomyRequestForm::FormIsNotSigned::what() const throw()
{
	return ("RobotomyRequestFormException: Form Grade is Not signed");
}

void	RobotomyRequestForm::action() const
{
	
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if(this->getisSigned() == false)
		throw RobotomyRequestForm::FormIsNotSigned();
	else if (this->getReqGradeToExecute() < executor.getGrage())
		throw RobotomyRequestForm::GradeTooLowException();
	this->action();
}
