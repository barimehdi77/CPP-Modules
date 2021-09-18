/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:44:55 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 16:30:19 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ClapTrap::ClapTrap( std::string Name )
{
	std::cout << "ClapTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &src ) { *this = src; }

ClapTrap::~ClapTrap()
{
	if (this->_HitPoints == 0)
		std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
	else
		std::cout << "ClapTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

ClapTrap & ClapTrap::operator=( const ClapTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap: < " << this->_Name << " > attack " << target
		<< ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	int newHitPoint = this->_HitPoints - amount;
	if (newHitPoint <= 0)
		newHitPoint = 0;
	if (this->_HitPoints != 0)
	{
		std::cout << "ClapTrap: < " << this->_Name << " > Take damage of " << amount << std::endl;
		std::cout << "ClapTrap: < " << this->_Name << " > HitPoint get down from "
			<< this->_HitPoints << " to " << newHitPoint << std::endl;
		this->_HitPoints = newHitPoint;
		if (newHitPoint == 0)
			std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
	}
	else
		std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_HitPoints == 0)
		std::cout << "ClapTrap: < " << this->_Name << " > is Dead!" << std::endl;
	else
	{
		int newHitPoint = this->_HitPoints + amount;
		std::cout << "ClapTrap: < " << this->_Name << " > adding " << amount << " to his HitPoint" << std::endl;
		std::cout << "ClapTrap: < " << this->_Name << " > HitPoint get from "
			<< this->_HitPoints << " to " << newHitPoint << std::endl;
	}
}
