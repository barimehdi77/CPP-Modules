/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:37:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/04 13:57:25 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTS_HPP
#define CASTS_HPP

#include <iostream>
#include <sstream>

class Casts
{
	private:
		char	_Type;
		int		_IntForm;
		char	_CharForm;
		float	_FloatForm;
		double	_DoubleForm;
	public:
		std::string const str;
		Casts();
		Casts( const std::string Number );
		Casts( const Casts & src);
		~Casts();
		Casts & operator = ( const Casts & rhs );
		class ArgsError: public std::exception
		{
			virtual const char* what() const throw();
		};
		char	getType() const;
		int		getIntForm() const;
		char	getCharForm() const;
		float	getFloatForm() const;
		double	getDoubleForm() const;

		void	FromInt();
		void	FromChar();
		void	FromFloat();
		void	FromDouble();

};

int		ErrorCheck( char type, const std::string & Number );
char	Parsing( const std::string & Number );

#endif
