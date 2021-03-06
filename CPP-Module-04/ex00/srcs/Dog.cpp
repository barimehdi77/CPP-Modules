/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:06:55 by mbari             #+#    #+#             */
/*   Updated: 2021/10/20 16:13:56 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
}

Dog::Dog( const Dog &src ) { *this = src; }

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog & Dog::operator=( const Dog &rhs)
{
	if (this == &rhs )
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "looks Like a Dog sound!" << std::endl;
}
