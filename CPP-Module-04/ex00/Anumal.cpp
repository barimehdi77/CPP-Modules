/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Anumal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:56:04 by mbari             #+#    #+#             */
/*   Updated: 2021/09/19 18:12:37 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
}

Animal::Animal( const Animal &src ) { *this = src; }

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal & Animal::operator=( const Animal &rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() { return (this->_type); }

void		Animal::makeSound()
{
	std::cout << "looks like an Animal sounds!" << std::endl;
}
