/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:23:19 by mbari             #+#    #+#             */
/*   Updated: 2021/09/23 10:26:29 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string Type)
{
	this->_Type = Type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor\n";
}

string const &Weapon::getType()
{
	return this->_Type;
}

void	Weapon::setType( string _type)
{
	this->_Type = _type;
}
