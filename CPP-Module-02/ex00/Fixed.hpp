/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:13:38 by mbari             #+#    #+#             */
/*   Updated: 2021/09/15 15:42:01 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		mutable int FixedPointValue;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &src);
		~Fixed();
		Fixed & operator = (const Fixed &src);
		int getRawBits( void ) const;
		void setRowBits( int const row ) const;
};

#endif
