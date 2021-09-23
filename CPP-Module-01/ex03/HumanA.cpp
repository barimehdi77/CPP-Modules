/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:31:14 by mbari             #+#    #+#             */
/*   Updated: 2021/09/23 10:28:39 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA( string Name, Weapon &Weapon ): _Name(Name), _Weapon(Weapon){}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor\n";
}

string	HumanA::getName()
{
	return (this->_Name);
}

void	HumanA::setName( string Name )
{
	this->_Name = Name;
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " << _Weapon.getType() << std::endl;
}
