/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:21:45 by mbari             #+#    #+#             */
/*   Updated: 2021/11/15 16:20:37 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _vec;
		Span();
	public:
		Span( unsigned int N );
		Span( const Span & src );
		~Span();
		Span & operator = ( const Span & rhs );

		class NoSpan
		{
			virtual const char* what() const throw();
		};

		class NoSpaceLeft
		{
			virtual const char* what() const throw();
		};

		template<typename T>
		void	addNumber(T start, T end)
		{
			int dist = std::distance(start, end);
			if (dist + this->_vec.size() > this->N)
				throw Span::NoSpaceLeft();
			this->_vec.insert(this->_vec.end(), start, end);
		}

		void	addNumber( int Numbre );
		int		longestSpan();
		int		shortestSpan();
};

#endif
