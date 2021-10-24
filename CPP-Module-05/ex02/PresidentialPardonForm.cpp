/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:30:54 by mbari             #+#    #+#             */
/*   Updated: 2021/10/24 12:59:13 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

std::string const PresidentialPardonForm::Name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
	Form(PresidentialPardonForm::Name, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	Form::operator=(rhs);
	return (*this);
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return ("PresidentialPardonFormException: Form Grade is too Low");
}

const char* PresidentialPardonForm::FormIsNotSigned::what() const throw()
{
	return ("PresidentialPardonFormException: Form Grade is Not signed");
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if(this->getisSigned() == false)
		throw PresidentialPardonForm::FormIsNotSigned();
	else if (this->getReqGradeToExecute() < executor.getGrage())
		throw PresidentialPardonForm::GradeTooLowException();
	this->action();
}
