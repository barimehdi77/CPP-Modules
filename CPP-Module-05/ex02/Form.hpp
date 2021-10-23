/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:07:18 by mbari             #+#    #+#             */
/*   Updated: 2021/10/23 15:49:44 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class	Bureaucrat;
#include <string>
#include <iostream>
class Form
{
	private:
		std::string				_Name;
		bool					_isSigned;
		unsigned int			_reqGradeToSign;
		unsigned int			_reqGradeToExecute;
	public:
		Form();
		Form( std::string Name, unsigned int reqGradeToSign, unsigned int reqGradeToExecute );
		Form( const Form & src );
		~Form();
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		Form &					operator = ( const Form & rhs );
		std::string				getName();
		bool					getisSigned();
		unsigned int			getReqGradeToSign();
		unsigned int			getReqGradeToExecute();
		void					beSigned( Bureaucrat & brc );
		virtual void			execute( Bureaucrat const & executor );
};

std::ostream&		operator << ( std::ostream& os, Form& form );

#endif
