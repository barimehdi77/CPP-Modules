/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 18:13:55 by mbari             #+#    #+#             */
/*   Updated: 2021/09/21 18:31:38 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( std::string const &type )
{
	this->_type = type;
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( const AMateria &src ) { *this = src; }

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

AMateria & AMateria::operator=( const AMateria & rhs ) { this->_type = rhs._type; }

std::string const & AMateria::getType() const { return (this->_type); }

// void	AMateria::use( ICharacter& target )
// {
// 	if (this->_type == "ICE")
// 		std::cout << "* shoots an ice bolt at " << target.getName << std::endl;
// 	if (this->_type == "CURE")

// }
