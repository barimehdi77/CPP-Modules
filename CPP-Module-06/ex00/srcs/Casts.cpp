/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:47:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/01 16:38:51 by mbari            ###   ########.fr       */
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
		{
			is_it[1] = 1;
			break;
		}
		else if(Number[i] == '.')
		{
			// is_it[0] = 0;
			if (Number.back() == 'f')
				is_it[2] = 1;
			else
				is_it[3] = 1;
			break;
		}
	}
	if (!(ErrorCheck(is_it)))
		throw Casts::ArgsError();
	for(int i = 0; i < 4; i++)
		std::cout << is_it[i] << " ";
}

int		ErrorCheck( int const is_it[4] )
{
	if (is_it[0]&& is_it[1])
		return (0);
	else if (!(is_it[0] && is_it[1] && is_it[2] && is_it[3]))
		return (0);
	else if (!is_it[0] && (is_it[2] || is_it[3]))
		return (0);
	return (1);
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

const char* Casts::ArgsError::what() const throw()
{
	return ("CastsException: Non-valid arg");
}

int		Casts::getIntForm() const { return (this->_IntForm); }
char	Casts::getCharForm() const { return (this->_CharForm); }
float	Casts::getFloatForm() const { return (this->_FloatForm); }
double	Casts::getDoubleForm() const { return (this->_DoubleForm); }
