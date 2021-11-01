/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 09:37:28 by mbari             #+#    #+#             */
/*   Updated: 2021/11/01 09:47:07 by mbari            ###   ########.fr       */
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

		int		getIntForm() const;
		char	getCharForm() const;
		float	getFloatForm() const;
		double	getDoubleForm() const;
};

#endif
