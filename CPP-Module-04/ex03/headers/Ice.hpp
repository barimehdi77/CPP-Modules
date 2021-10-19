/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:59:27 by mbari             #+#    #+#             */
/*   Updated: 2021/10/13 13:00:21 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice( const Ice &src );
		~Ice();
		Ice & operator = ( const Ice &rhs );
		AMateria* clone() const;
		void use( ICharacter& target );
};

#endif
