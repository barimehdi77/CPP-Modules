/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:36:23 by mbari             #+#    #+#             */
/*   Updated: 2021/08/10 05:39:00 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

string	contact::get_first_name()
{
	return (this->first_name);
}

string	contact::get_last_name()
{
	return (this->last_name);
}

string	contact::get_nicke_name()
{
	return (this->nicke_name);
}

string	contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

string	contact::get_phone_number()
{
	return (this->phone_number);
}

void	contact::set_first_name(string firstname)
{
	this->first_name = firstname;
}

void contact::set_last_name(string lastname)
{
	this->last_name = lastname;
}

void contact::set_nicke_name(string nickename)
{
	this->nicke_name = nickename;
}

void contact::set_darkest_secret(string darkestsecret)
{
	this->darkest_secret = darkestsecret;
}

void contact::set_phone_number(string phonenumber)
{
	this->phone_number = phonenumber;
}