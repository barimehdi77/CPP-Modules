/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:37:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/02 11:13:03 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTS_HPP
#define CASTS_HPP

#include <iostream>
#include <string>

class Casts
{
	private:
		int		_IntForm;
		char	_CharForm;
		float	_FloatForm;
		double	_DoubleForm;
	public:
		Casts();
		Casts( const std::string Number );
		Casts( const Casts & src);
		~Casts();
		Casts & operator = ( const Casts & rhs );
		class ArgsError: public std::exception
		{
			virtual const char* what() const throw();
		};
		int		getIntForm() const;
		char	getCharForm() const;
		float	getFloatForm() const;
		double	getDoubleForm() const;
};

int		ErrorCheck( int const is_it[4] );
char	getType( std::string Number );

#endif
