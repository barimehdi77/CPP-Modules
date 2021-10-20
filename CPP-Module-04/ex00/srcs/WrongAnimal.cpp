/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:32:07 by mbari             #+#    #+#             */
/*   Updated: 2021/10/20 16:13:58 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src ) { *this = src; }

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType() const { return (this->_type); }

void		WrongAnimal::makeSound() const
{
	std::cout << "looks like a Wrong Animal sounds!" << std::endl;
}
