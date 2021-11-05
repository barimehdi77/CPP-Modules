/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:47:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/04 15:58:40 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Casts.hpp"

Casts::Casts()
{
	throw Casts::ArgsError();
}

Casts::Casts( const std::string Number ):
		_Type(0), _IntForm(0), _CharForm(0), _FloatForm(0.0), _DoubleForm(0.0)
{
	std::stringstream ss;
	ss << Number;
	this->_Type = Parsing(Number);
	if (!(ErrorCheck(this->_Type, Number)))
		throw Casts::ArgsError();
	if (this->_Type == 'i')
		ss >> this->_IntForm;
	else if (this->_Type == 'c')
		ss >> this->_CharForm;
	else if (this->_Type == 'f')
		ss >> this->_FloatForm;
	else if (this->_Type == 'd')
		ss >> this->_DoubleForm;
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

char	Casts::getType() const { return (this->_Type); }
int		Casts::getIntForm() const { return (this->_IntForm); }
char	Casts::getCharForm() const { return (this->_CharForm); }
float	Casts::getFloatForm() const { return (this->_FloatForm); }
double	Casts::getDoubleForm() const { return (this->_DoubleForm); }

void	Casts::FromInt()
{
	this->_CharForm = static_cast<char>(this->_IntForm);
	this->_FloatForm = static_cast<float>(this->_IntForm);
	this->_DoubleForm = static_cast<double>(this->_IntForm);
}

void	Casts::FromFloat()
{
	this->_CharForm = static_cast<char>(this->_FloatForm);
	this->_IntForm = static_cast<int>(this->_FloatForm);
	this->_DoubleForm = static_cast<double>(this->_FloatForm);
}

int		ErrorCheck( char type, const std::string & Number )
{
	if (type == 0)
		return (0);
	if (type == 'x' || type == 'y')
		return (1);
	else if (type != 'c')
		for(size_t i = 0; i < Number.length(); i++)
			if (!std::isdigit(Number[i]) &&
				Number[i] != '.' && Number[i] != '-' &&
					Number[i] != '+' && Number.back() != 'f')
				return (0);
	return (1);
}

char	Parsing( const std::string & Number )
{
	char type = 0;
	if (Number == "nanf" || Number == "-inff" || Number == "+inff")
		return ('x');
	if (Number == "nan" || Number == "-inf" || Number == "+inf")
		return ('y');
	if (std::isdigit(Number[0]) ||
		((Number[0] == '-' && std::isdigit(Number[1])) ||
			(Number[0] == '+' && std::isdigit(Number[1]))))
	{
		int point = 0;
		for(size_t i = 0; i < Number.length(); i++)
		{
			if (std::isdigit(Number[i]) || Number[i] == 'f' ||
				(i == 0 && Number[0] == '-') || (i == 0 && Number[0] == '+'))
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
