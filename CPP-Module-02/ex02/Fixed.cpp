/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:18:34 by mbari             #+#    #+#             */
/*   Updated: 2021/09/16 16:51:01 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/********************* default constructor *******************/

Fixed::Fixed()
{
	this->FixedPointValue = 0;
}

/********************* constructors *******************/

Fixed::Fixed(const int number)
{
	this->FixedPointValue = number << this->bits;
}

Fixed::Fixed( const float fnumber)
{
	this->FixedPointValue = (int)(roundf(fnumber * (1 << this->bits)));
}

Fixed::Fixed(const Fixed &src)
{
	this->FixedPointValue = src.getRawBits();
}

/********************* destructor *******************/

Fixed::~Fixed()
{
}

/********************* assignation operator overload *******************/

Fixed & Fixed::operator=(const Fixed &src)
{
	this->FixedPointValue = src.getRawBits();
	return *this;
}

/********************* member operator overloads *******************/


Fixed Fixed::operator+(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits(this->FixedPointValue + src.getRawBits());
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits(this->FixedPointValue - src.getRawBits());
	return (rtn);
}

Fixed Fixed::operator*(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->FixedPointValue * src.getRawBits()) >> this->bits);
	return (rtn);
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->FixedPointValue << this->bits) / src.getRawBits());
	return (rtn);
}

/********************* post/per increment/decrement operator *******************/

Fixed & Fixed::operator++( void )
{
	this->FixedPointValue++;
	return (*this);
}

Fixed & Fixed::operator--( void )
{
	this->FixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed rtn(*this);
	operator++();
	return (rtn);
}

Fixed Fixed::operator--( int )
{
	Fixed rtn(*this);
	operator--();
	return (rtn);
}

/********************* comparison operators *******************/

bool Fixed::operator>( const Fixed &src) const {return (this->FixedPointValue > src.getRawBits());}
bool Fixed::operator<( const Fixed &src) const {return (this->FixedPointValue < src.getRawBits());}
bool Fixed::operator>=( const Fixed &src) const {return (this->FixedPointValue >= src.getRawBits());}
bool Fixed::operator<=( const Fixed &src) const {return (this->FixedPointValue <= src.getRawBits());}
bool Fixed::operator==( const Fixed &src) const {return (this->FixedPointValue == src.getRawBits());}
bool Fixed::operator!=( const Fixed &src) const {return !(this->FixedPointValue == src.getRawBits());}

/********************* SETTER AND GETTER *******************/

int Fixed::getRawBits( void ) const {return (this->FixedPointValue);}
void Fixed::setRowBits( int const row) {this->FixedPointValue = row;}

/********************* ToInt AND ToFloat Functions *******************/

float	Fixed::toFloat() const
{
	return ((float)this->FixedPointValue / (1 << this->bits));
}

int Fixed::toInt() const
{
	return ((int)(this->FixedPointValue >> this->bits));
}
/********************* min AND max functions *******************/

Fixed & Fixed::min(Fixed &first, Fixed &second) { return (first < second ? first : second); }
const Fixed & Fixed::min(const Fixed &first, const Fixed &second) { return (first < second ? first : second); }
Fixed & Fixed::max(Fixed &first, Fixed &second) { return (first > second ? first : second); }
const Fixed & Fixed::max(const Fixed &first, const Fixed &second) { return (first > second ? first : second); }

/********************* print operater overload *******************/

std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}
