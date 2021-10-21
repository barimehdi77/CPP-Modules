/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:24:31 by mbari             #+#    #+#             */
/*   Updated: 2021/10/21 14:41:23 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
Form::Form()
{
	// throw Form::GradeTooHighException();
}

Form::Form( std::string Name, int reqGradeToSign, int reqGradeToExecute )
{
	this->_Name = Name;
	this->_isSigned = false;
	this->_reqGradeToSign = reqGradeToSign;
	this->_reqGradeToExecute = reqGradeToExecute;
}

Form::~Form()
{
	
}
