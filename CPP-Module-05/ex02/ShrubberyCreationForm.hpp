/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 13:07:19 by mbari             #+#    #+#             */
/*   Updated: 2021/10/23 16:25:03 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm();
		std::string const	_target;
	public:
		static std::string const	Name;
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm & src );
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm & rhs );

		class FileCannotCreate: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};
		void	action();
		void	execute( Bureaucrat const & executor );
};

#endif
