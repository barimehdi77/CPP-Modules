/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:14:42 by mbari             #+#    #+#             */
/*   Updated: 2021/09/22 15:12:23 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( string _name ): name(_name), weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor\n";
}

string	HumanB::getName()
{
	return (this->name);
}

void	HumanB::setName( string _name )
{
	this->name = _name;
}

void	HumanB::attack()
{
	if (this->weapon != NULL)
		std::cout << this->getName() << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(  Weapon &_weapon )
{
	this->weapon = &_weapon;
}
