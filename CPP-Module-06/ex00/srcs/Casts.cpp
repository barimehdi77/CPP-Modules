/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:47:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/05 13:27:19 by mbari            ###   ########.fr       */
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
	this->_Type = Parsing(Number);
	if (!(ErrorCheck(this->_Type, Number)))
		throw Casts::ArgsError();
	if (this->_Type == 'i')
		this->_IntForm = std::stoi(Number);
	else if (this->_Type == 'c')
		this->_CharForm = Number[0];
	else if (this->_Type == 'f')
		this->_FloatForm = std::stof(Number);
	else if (this->_Type == 'd')
		this->_DoubleForm = std::stod(Number);
	std::cout << this->_DoubleForm << "-------" << Number << "\n";
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

void	Casts::FromChar()
{
	this->_IntForm = static_cast<int>(this->_CharForm);
	this->_FloatForm = static_cast<float>(this->_CharForm);
	this->_DoubleForm = static_cast<double>(this->_CharForm);
}

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

void	Casts::FromDouble()
{
	this->_CharForm = static_cast<char>(this->_DoubleForm);
	this->_IntForm = static_cast<int>(this->_DoubleForm);
	this->_FloatForm = static_cast<float>(this->_DoubleForm);
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

std::string	Casts::print( int type, std::string Number )
{
	if ( type == 'i' )
	{
		if (Number == "nan" || Number == "+inf" || Number == "-inf" ||
			Number == "nanf" || Number == "+inff" || Number == "-inff")
			return ("impossible");
		else
			return (std::to_string(this->_IntForm));
	}
	else if ( type == 'c' )
	{
		if (Number == "nan" || Number == "+inf" || Number == "-inf" ||
			Number == "nanf" || Number == "+inff" || Number == "-inff")
			return ("impossible");
		else if (!std::isprint(this->_CharForm))
			return ("Non displayable");
		else
			return (std::to_string(this->_CharForm));
	}
	else if ( type == 'f' )
	{
		if (Number == "nan" || Number == "+inf" || Number == "-inf")
			return (Number + "f");
		else if (Number == "nanf" || Number == "+inff" || Number == "-inff")
			return (Number);
		else
			return (std::to_string(this->_FloatForm) + "f");
	}
	else if ( type == 'd' )
	{
		if (Number == "nan" || Number == "+inf" || Number == "-inf")
			return (Number);
		else if (Number == "+inff" || Number == "-inff")
			return (Number.erase(4));
		else if (Number == "nanf")
			return (Number.erase(3));
		else
		{
			std::string	ds = std::to_string(this->_DoubleForm);
			int	DAFP = ds.substr(ds.find("."), ds.length()).length();
			std::cout << ds << " " << DAFP << std::endl;
			return (std::to_string(this->_DoubleForm));
		}
	}
	throw Casts::ArgsError();
}
