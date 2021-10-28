/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:07:18 by mbari             #+#    #+#             */
/*   Updated: 2021/10/28 17:49:19 by mbari            ###   ########.fr       */
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
		const std::string	_Name;
		bool				_isSigned;
		const int			_reqGradeToSign;
		const int			_reqGradeToExecute;
	public:
		Form();
		Form( std::string Name, int reqGradeToSign, int reqGradeToExecute );
		Form( const Form & src );
		virtual ~Form();
		class GradeTooLowException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual	const char * what() const throw();
		};
		class FormIsNotSigned: public std::exception
		{
			virtual	const char * what() const throw();
		};

		Form &			operator = ( const Form & rhs );
		std::string		getName() const;
		bool			getisSigned()  const;
		int				getReqGradeToSign()  const;
		int				getReqGradeToExecute()  const;
		void			beSigned( Bureaucrat & brc );
		virtual void	execute( Bureaucrat const & executor ) const = 0;
		virtual void	action() const = 0;
};

std::ostream&		operator << ( std::ostream& os, Form& form );

#endif
