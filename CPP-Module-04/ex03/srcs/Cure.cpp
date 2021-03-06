/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:27:16 by mbari             #+#    #+#             */
/*   Updated: 2021/10/20 16:55:15 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"
#include "../headers/ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure Constructor Called" << std::endl;
}

Cure::Cure( const Cure &src ) { *this = src; }

Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}

Cure & Cure::operator=( const Cure & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
