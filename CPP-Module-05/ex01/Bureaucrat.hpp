/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:04:35 by mbari             #+#    #+#             */
/*   Updated: 2021/11/01 09:04:37 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_Name;
		int					_Grade;
	public:
		Bureaucrat();
		Bureaucrat( const std::string Name, int Grade );
		Bureaucrat( const Bureaucrat & src );
		~Bureaucrat();
		Bureaucrat & operator = ( const Bureaucrat & rhs );
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};

		std::string		getName() const;
		int	getGrage() const;
		void			GardeIncrement();
		void			GradeDecrement();
		void			singForm( Form & form );
};

std::ostream& operator << ( std::ostream& os, Bureaucrat& brc );

#endif
