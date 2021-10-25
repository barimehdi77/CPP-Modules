/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:50:26 by mbari             #+#    #+#             */
/*   Updated: 2021/10/25 17:08:41 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern & src ) {}

Intern::~Intern() {}

Intern & Intern::operator=( const Intern & rhs )
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

Form*	Intern::ShrubberyCreation( std::string target )
{ return (new ShrubberyCreationForm(target));}

Form* Intern::RobotomyRequest( std::string target )
{ return (new RobotomyRequestForm(target));}

Form* Intern::PresidentialPardon( std::string target )
{ return (new PresidentialPardonForm(target));}

Form*	Intern::makeForm( std::string Type, std::string target )
{
	std::string	Forms[] = { "Shrubbery Creation", "RobotomyRequest", "PresidentialPardon" };
	Form* (Intern:: *form[]) (std::string target) = {
		form[0] = &Intern::ShrubberyCreation,
		form[1] = &Intern::RobotomyRequest,
		form[2] = &Intern::PresidentialPardon
	};
	for(int i = 0; i < 3; i++)
		if(Forms[i] == Type)
			return ((this->*form[i])(target));
}
