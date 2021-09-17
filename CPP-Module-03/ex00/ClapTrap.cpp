/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:44:55 by mbari             #+#    #+#             */
/*   Updated: 2021/09/17 19:36:17 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_Name = "Nobody";
	this->_Hitpoint = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "calling : " << this->_Name << std::endl;
}

ClapTrap::ClapTrap( std::string Name )
{
	this->_Name = Name;
	this->_Hitpoint = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "ClapTrap: " << this->_Name << " joinig The fight" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) { *this = src; }

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << this->_Name << " is out" << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_Hitpoint = rhs._Hitpoint;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap: " << this->_Name << " attack " << target
		<< ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	int newHitPoint = this->_Hitpoint - amount;
	if (newHitPoint >= 0)
		newHitPoint = 0;
	if (this->_Hitpoint != 0)
	{
		std::cout << "ClapTrap: " << this->_Name << " Take damage of " << amount << std::endl;
		std::cout << "ClapTrap: " << this->_Name << " HitPoint get down from "
			<< this->_Hitpoint << " to " << newHitPoint << std::endl;
		this->_Hitpoint = newHitPoint;
		if (newHitPoint == 0)
			std::cout << "ClapTrap: " << this->_Name << " is Dead!" << std::endl;
	}
	else
		std::cout << "ClapTrap: " << this->_Name << " is Dead!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_Hitpoint == 0)
		std::cout << "ClapTrap: " << this->_Name << " is Dead!" << std::endl;
	else
	{
		int newHitPoint = this->_Hitpoint + amount;
		std::cout << "ClapTrap: " << this->_Name << " adding " << amount << " to his HitPoint" << std::endl;
		std::cout << "ClapTrap: " << this->_Name << " HitPoint get down from "
			<< this->_Hitpoint << " to " << newHitPoint << std::endl;
	}
}
