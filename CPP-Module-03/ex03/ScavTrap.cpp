/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:20:05 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 15:05:05 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	this->_Name = "Nobody";
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap( std::string Name ) : ClapTrap( Name )
{
	this->_Name = Name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap: < " << this->_Name << " > joinig The fight" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) { *this = src; }

ScavTrap::~ScavTrap()
{
	if (this->_HitPoints == 0)
		std::cout << "ScavTrap: < " << this->_Name << " > is Dead!" << std::endl;
	else
		std::cout << "ScavTrap: < " << this->_Name << " > is leaving the fight!" << std::endl;
}

ScavTrap & ScavTrap::operator = ( const ScavTrap &rhs )
{
	if (this == &rhs)
		return *this;
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	return *this;
}

void	ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap: < " << this->_Name << " > attack " << target
		<< ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardgate()
{
	std::cout << "ScavTrap: < " << this->_Name <<
		" > has enterred in Gate Kepper mode" << std::endl;
}
