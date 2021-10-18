/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:41:44 by mbari             #+#    #+#             */
/*   Updated: 2021/10/18 17:31:25 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_Name = "No Name";
	this->_Inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = NULL;
	std::cout << this->_Name << " Constructor Called" << std::endl;
}

Character::Character( std::string Name )
{
	this->_Name = Name;
	this->_Inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = NULL;
	std::cout << this->_Name << " Constructor Called" << std::endl;
}

Character::Character( const Character &src ) { *this = src; }

Character::~Character()
{
	// for (size_t i = 0; i < 4; i++)
	// {
	// 	if (this->_Inventory[i])
	// 		delete this->_Inventory[i];
	// }
	delete [] this->_Inventory;
	std::cout << this->_Name << " Destructor Called" << std::endl;

}

Character & Character::operator=( const Character &rhs )
{
	if (this == &rhs)
		return (*this);
	// for (size_t i = 0; i < 4; i++)
	// {
	// 	if (this->_Inventory[i])
	// 		delete this->_Inventory[i];
	// }
	if (this->_Inventory == NULL)
		delete [] this->_Inventory;
	this->_Inventory = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
	{
		this->_Name = rhs._Name;
		if (rhs._Inventory[i])
			this->_Inventory[i] = rhs._Inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const { return (this->_Name); }

void	Character::equip( AMateria* m )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_Inventory[i])
		{
			this->_Inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip( int idx ) { this->_Inventory[idx] = NULL; }

void	Character::use( int idx, ICharacter& target )
{
	if (this->_Inventory[idx] == NULL)
	{
		std::cout << this->_Name << " has no materia in index "
		<< idx << std::endl;
		return;
	}
	std::cout << this->_Name << ": ";
	this->_Inventory[idx]->use(target);
}
