/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:23:19 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 20:29:17 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string _type)
{
	setType(_type);
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor\n";
}

string const &Weapon::getType()
{
	return this->type;
}

void	Weapon::setType( string _type)
{
	this->type = _type;
}
