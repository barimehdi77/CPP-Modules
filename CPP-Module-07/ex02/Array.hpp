/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:21:37 by mbari             #+#    #+#             */
/*   Updated: 2021/11/10 18:16:06 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array(): _arr(new T(0)) _size(0);
		Array( unsigned int n ): _arr(new T[n]()), _size(n);
		Array( const Array & src ) { *this = src; };
		~Array(){ delete this->_arr; };
		class OutofBounds: public std::exception
		{
			virtual const char * what() throw()
			{
				return ("ARRAYEXCEPTION: The Index is Out of Bounds");
			}
		};
		Array & operator = ( const Array & rhs )
		{
			if (this == &rhs)
				return (*this);
			this->_size = rhs._size;
			this->_arr = new T[n]();
			for (size_t i = 0; i < this->_size; i++)
				this->_arr[i] = rhs->_arr[i];
			return (*this);
		};
		T & operator[]( unsigned int n )
		{
			if (n > size || n < 0)
				throw Array::OutofBounds();
			return (this->_arr[n]);
		};
		unsigned int size() const { return (this->_size); };
};

#endif
