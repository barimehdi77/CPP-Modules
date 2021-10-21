/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:07:18 by mbari             #+#    #+#             */
/*   Updated: 2021/10/21 14:38:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form
{
	private:
		std::string	_Name;
		bool		_isSigned;
		int			_reqGradeToSign;
		int			_reqGradeToExecute;
	public:
		Form();
		Form( std::string Name, int reqGradeToSign, int reqGradeToExecute );
		Form( const Form & src );
		~Form();
		Form &	operator = ( const Form & rhs );
		void	getName();
		void	getisSigned();
		void	getReqGradeToSign();
		void	getReqGradeToExecute();
		void	beSigned();
		void	signForm();
};

#endif
