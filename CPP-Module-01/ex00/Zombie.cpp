/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:39:17 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 17:22:21 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
	std::cout << "Constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor" << std::endl;
}

std::string	Zombie::getname()
{
	return (this->name);
}

void	Zombie::setname(std::string _name)
{
	this->name = _name;
}

void	Zombie::announce( void )
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
