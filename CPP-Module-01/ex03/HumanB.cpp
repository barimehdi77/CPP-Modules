/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:14:42 by mbari             #+#    #+#             */
/*   Updated: 2021/09/23 10:30:06 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB( string Name ): _Name(Name), _Weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << "HumanB Destructor\n";
}

string	HumanB::getName()
{
	return (this->_Name);
}

void	HumanB::setName( string Name )
{
	this->_Name = Name;
}

void	HumanB::attack()
{
	if (this->_Weapon != NULL)
		std::cout << this->getName() << " attacks with his " << _Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(  Weapon &Weapon )
{
	this->_Weapon = &Weapon;
}
