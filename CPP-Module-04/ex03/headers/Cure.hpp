/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:26:33 by mbari             #+#    #+#             */
/*   Updated: 2021/10/13 13:00:06 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure( const Cure &src );
		~Cure();
		Cure & operator = ( const Cure &rhs );
		AMateria* clone() const;
		void use( ICharacter& target );
};

#endif
