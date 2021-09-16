/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:36:23 by mbari             #+#    #+#             */
/*   Updated: 2021/09/16 18:52:49 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Contact.hpp"

std::string	Contact::get_first_name()
{
	return (this->_first_name);
}

std::string	Contact::get_last_name()
{
	return (this->_last_name);
}

std::string	Contact::get_nicke_name()
{
	return (this->_nicke_name);
}

std::string	Contact::get_darkest_secret()
{
	return (this->_darkest_secret);
}

std::string	Contact::get_phone_number()
{
	return (this->_phone_number);
}

void	Contact::set_first_name(std::string firstname)
{
	this->_first_name = firstname;
}

void Contact::set_last_name(std::string lastname)
{
	this->_last_name = lastname;
}

void Contact::set_nicke_name(std::string nickename)
{
	this->_nicke_name = nickename;
}

void Contact::set_darkest_secret(std::string darkestsecret)
{
	this->_darkest_secret = darkestsecret;
}

void Contact::set_phone_number(std::string phonenumber)
{
	this->_phone_number = phonenumber;
}
