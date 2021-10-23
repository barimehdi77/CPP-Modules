/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:41:37 by mbari             #+#    #+#             */
/*   Updated: 2021/10/23 19:50:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		RobotomyRequestForm();
		std::string const	_target;
	public:
		static std::string const	Name;
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( const RobotomyRequestForm & src );
		~RobotomyRequestForm();
		RobotomyRequestForm & operator = ( const RobotomyRequestForm & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};
		void	action() const;
		void	execute( Bureaucrat const & executor ) const;
};

#endif
