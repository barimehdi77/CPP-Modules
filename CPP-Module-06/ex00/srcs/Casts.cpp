/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:47:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/02 13:23:09 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Casts.hpp"

Casts::Casts()
{
	throw Casts::ArgsError();
}

Casts::Casts( const std::string Number)
{
	char type = getType(Number);
	if (!(ErrorCheck(type, Number)))
		throw Casts::ArgsError();

	std::cout << type << " ";
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

int		Casts::getType() const { return (this->_Type); }
int		Casts::getIntForm() const { return (this->_IntForm); }
char	Casts::getCharForm() const { return (this->_CharForm); }
float	Casts::getFloatForm() const { return (this->_FloatForm); }
double	Casts::getDoubleForm() const { return (this->_DoubleForm); }

int		ErrorCheck( char type, const std::string & Number )
{
	if (type == 0)
		return (0);
	else if (type != 'c')
		for(size_t i = 0; i < Number.length(); i++)
			if (!std::isdigit(Number[i]) && Number[i] != '.'  && Number[i] != '-' && Number.back() != 'f')
				return (0);
	return (1);
}

char	getType( const std::string & Number )
{
	char type = 0;
	if (std::isdigit(Number[0]) || (Number[0] == '-' && std::isdigit(Number[1])))
	{
		int point = 0;
		for(size_t i = 0; i < Number.length(); i++)
		{
			if (std::isdigit(Number[i]) || Number[i] == 'f' || (i == 0 && Number[0] == '-'))
				continue;
			else if (Number[i] == '.')
			{
				if (point == 1)
					throw Casts::ArgsError();
				point = 1;
				if (Number.back() == 'f')
					type = 'f';
				else
					type = 'd';
			}
			else
				throw Casts::ArgsError();
		}
		if (type == 0)
			type = 'i';
	}
	else
	{
		if (Number.length() == 1)
			type = 'c';
		else
			type = 0;
	}
	return (type);
}
