/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:00:16 by mbari             #+#    #+#             */
/*   Updated: 2021/10/16 19:03:55 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"


Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice Constructor Called" << std::endl;
}

Ice::Ice( const Ice &src ) { *this = src; }

Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

Ice & Ice::operator=( const Ice & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}
