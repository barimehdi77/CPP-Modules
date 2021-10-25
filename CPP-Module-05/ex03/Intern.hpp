/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:48:03 by mbari             #+#    #+#             */
/*   Updated: 2021/10/25 17:22:20 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern( const Intern & src );
		~Intern();
		Intern & operator = ( const Intern & rhs );
		class FormNotFound: public std::exception
		{
			virtual	const char * what() const throw();
		};
		Form*	ShrubberyCreation( std::string target );
		Form*	RobotomyRequest( std::string target );
		Form*	PresidentialPardon( std::string target );
		Form*	makeForm( std::string Type, std::string target );
};

#endif
