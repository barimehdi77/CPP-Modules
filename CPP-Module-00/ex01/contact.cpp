/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:36:23 by mbari             #+#    #+#             */
/*   Updated: 2021/08/09 21:59:38 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

string	contact::get_first_name()
{
	return (first_name);
}

string	contact::get_last_name()
{
	return (last_name);
}

string	contact::get_nicke_name()
{
	return (nicke_name);
}

string	contact::get_darkest_secret()
{
	return (darkest_secret);
}

string	contact::get_phone_number()
{
	return (phone_number);
}

void	contact::set_first_name(string firstname)
{
	first_name = firstname;
}

void contact::set_last_name(string lastname)
{
	last_name = lastname;
}

void contact::set_nicke_name(string nickename)
{
	nicke_name = nickename;
}

void contact::set_darkest_secret(string darkestsecret)
{
	darkest_secret = darkestsecret;
}

void contact::set_phone_number(string phonenumber)
{
	phone_number = phonenumber;
}