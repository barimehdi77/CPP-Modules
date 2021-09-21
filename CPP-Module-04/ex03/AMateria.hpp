/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:33:51 by mbari             #+#    #+#             */
/*   Updated: 2021/09/21 18:27:30 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"
class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &src );
		~AMateria();
		AMateria & operator = ( const AMateria &rhs );
		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );

};


#endif
