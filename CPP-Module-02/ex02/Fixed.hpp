/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:13:38 by mbari             #+#    #+#             */
/*   Updated: 2021/09/16 16:38:21 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int FixedPointValue;
		static const int bits = 8;
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float fnumber );
		Fixed( const Fixed &src );
		~Fixed();
		Fixed & operator = ( const Fixed &src );
		Fixed operator + ( const Fixed &src ) const;
		Fixed operator - ( const Fixed &src ) const;
		Fixed operator * ( const Fixed &src ) const;
		Fixed operator / ( const Fixed &src ) const;


		Fixed & operator ++ ( void ); //pre increment
		Fixed & operator -- ( void ); //pre decrement
		Fixed operator ++ ( int );  //post increment
		Fixed operator -- ( int ); //post decrement

		bool operator > ( const Fixed &src ) const;
		bool operator < ( const Fixed &src ) const;
		bool operator >= ( const Fixed &src ) const;
		bool operator <= ( const Fixed &src ) const;
		bool operator == ( const Fixed &src ) const;
		bool operator != ( const Fixed &src ) const;

		static Fixed &min ( Fixed & first, Fixed &second);
		const static Fixed &min ( const Fixed & first, const Fixed &second);
		static Fixed &max ( Fixed & first, Fixed &second);
		const static Fixed &max ( const Fixed & first, const Fixed &second);

		int getRawBits( void ) const;
		void setRowBits( int const row ) ;
		float toFloat( void ) const;
		int toInt( void ) const;
};

Fixed &min(Fixed &first, Fixed &second);
Fixed &max(Fixed &first, Fixed &second);
std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif
