/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:18:34 by mbari             #+#    #+#             */
/*   Updated: 2021/09/15 17:17:54 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->FixedPointValue = 0;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->FixedPointValue = number << this->bits;
}

Fixed::Fixed( const float fnumber)
{
	 std::cout << "Float constructor called" << std::endl;
	this->FixedPointValue = (int)(roundf(fnumber * (1 << this->bits)));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->FixedPointValue = src.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->FixedPointValue = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPointValue);
}

void Fixed::setRowBits( int const row)
{
	this->FixedPointValue = row;
}

float	Fixed::toFloat() const
{
	return ((float)this->FixedPointValue / (1 << this->bits));
}

int Fixed::toInt() const
{
	return ((int)(this->FixedPointValue >> this->bits));
}
std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}
