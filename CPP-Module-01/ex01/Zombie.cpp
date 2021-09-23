/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:39:17 by mbari             #+#    #+#             */
/*   Updated: 2021/09/23 10:19:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
	std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "The Zombie " << this->_Name << " Has Destructor" << std::endl;
}

std::string	Zombie::getname()
{
	return (this->_Name);
}

void	Zombie::setname(std::string Name)
{
	this->_Name = Name;
}

void	Zombie::announce( void )
{
	std::cout << this->_Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
