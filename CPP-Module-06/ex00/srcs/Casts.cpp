/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:47:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/01 13:45:04 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Casts.hpp"

Casts::Casts()
{
	std::cout << "skdos";
}

Casts::Casts( const std::string Number)
{
	/*
	is_it[0] for int
	is_it[1] for char
	is_it[2] for float
	is_it[3] for double
	*/
	int is_it[4] = {0, 0, 0, 0};
	for(size_t i = 0; i < Number.length(); i++)
	{
		if(std::isdigit(Number[i]))
			is_it[0] = 1;
		else if(std::isalpha(Number[i]))
			is_it[1] = 1;
		else if(Number[i] == '.')
		{
			if (Number.back() == 'f')
				is_it[2] = 1;
			else
				is_it[3] = 1;
		}
	}
	for(int i = 0; i < 4; i++)
		std::cout << is_it[i] << " ";
}

Casts::Casts( const Casts &  src) { *this = src;}

Casts::~Casts()
{
}

Casts & Casts::operator=( const Casts & rhs )
{
	if (this == &rhs)
		return (*this);
	this->_IntForm = rhs._IntForm;
	this->_CharForm = rhs._CharForm;
	this->_FloatForm = rhs._FloatForm;
	this->_DoubleForm = rhs._DoubleForm;
	return (*this);
}

int		Casts::getIntForm() const { return (this->_IntForm); }
char	Casts::getCharForm() const { return (this->_CharForm); }
float	Casts::getFloatForm() const { return (this->_FloatForm); }
double	Casts::getDoubleForm() const { return (this->_DoubleForm); }
