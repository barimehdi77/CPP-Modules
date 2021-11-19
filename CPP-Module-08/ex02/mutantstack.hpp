/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:32:23 by mbari             #+#    #+#             */
/*   Updated: 2021/11/19 18:07:30 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <list>
#include <stack>
#include <algorithm>
#include <iterator>

template <class Type, class Container = std::deque<Type> >
class MutantStack: public std::stack<Type, Container>
{
	public:
		MutantStack(): std::stack<Type, Container>() {}
		MutantStack( const MutantStack & src ) : std::stack<Type, Container>( src ) {}
		MutantStack & operator = ( const MutantStack & rhs )
		{
			if (this == &rhs )
				return (*this);
			this->c = rhs.c;
			return (*this);
		}
		typedef typename std::stack<Type, Container>::container_type::iterator iterator;
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

#endif

