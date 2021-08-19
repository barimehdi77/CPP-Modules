/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:31:14 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 20:35:22 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA( string _name, Weapon &_weapon ): name(_name), weapon(_weapon){}

HumanA::~HumanA()
{
	std::cout << "HumanA Destructor\n";
}

string	HumanA::getName()
{
	return (this->name);
}

void	HumanA::setName( string _name )
{
	this->name = _name;
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " << weapon.getType() << std::endl;
}
