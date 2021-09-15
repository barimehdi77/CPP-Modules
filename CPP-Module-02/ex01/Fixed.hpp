/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:13:38 by mbari             #+#    #+#             */
/*   Updated: 2021/09/15 17:01:20 by mbari            ###   ########.fr       */
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
		Fixed(const int number);
		Fixed(const float fnumber);
		Fixed(const Fixed &src);
		~Fixed();
		Fixed & operator = (const Fixed &src);
		int getRawBits( void ) const;
		void setRowBits( int const row ) ;
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif
