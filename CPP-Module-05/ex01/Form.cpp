/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:24:31 by mbari             #+#    #+#             */
/*   Updated: 2021/10/23 19:02:46 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
	throw Form::GradeTooHighException();
}

Form::Form( std::string Name, unsigned int reqGradeToSign, unsigned int reqGradeToExecute )
{
	if (reqGradeToSign == 0 || reqGradeToExecute == 0)
		throw Form::GradeTooHighException();
	if ( reqGradeToSign > 150 || reqGradeToExecute > 150)
		throw Form::GradeTooLowException();
	this->_Name = Name;
	this->_isSigned = false;
	this->_reqGradeToSign = reqGradeToSign;
	this->_reqGradeToExecute = reqGradeToExecute;
}

Form::Form( const Form & src) { *this = src; }

Form::~Form() {}

Form & Form::operator=( const Form & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_Name = rhs._Name;
	this->_isSigned = rhs._isSigned;
	this->_reqGradeToSign = rhs._reqGradeToSign;
	this->_reqGradeToExecute = rhs._reqGradeToExecute;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("FormException: Form Grade is too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FormException: Form Grade is too Low");
}

std::string		Form::getName() const { return (this->_Name); }
bool			Form::getisSigned() const { return (this->_isSigned); }
unsigned int	Form::getReqGradeToSign() const { return (this->_reqGradeToSign); }
unsigned int	Form::getReqGradeToExecute() const { return (this->_reqGradeToExecute); }

void		Form::beSigned( Bureaucrat & brc )
{
	if (brc.getGrage() > this->_reqGradeToSign)
		throw  Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<( std::ostream& os, Form& form )
{
	os << "The Form " << form.getName() << ", need a Bureaucrat has Grade " << form.getReqGradeToSign() << " or higher to be able to sign, and need a Bureaucrat has Grade "
		<< form.getReqGradeToSign() << " or higher to be execute " << std::endl;
	return (os);
}
