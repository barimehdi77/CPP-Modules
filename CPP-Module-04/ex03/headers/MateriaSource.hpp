/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:36:44 by mbari             #+#    #+#             */
/*   Updated: 2021/10/20 16:55:00 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		int			_Size;
		AMateria**	_Sources;
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		~MateriaSource();
		MateriaSource &	operator = ( const MateriaSource &rhs );
		void			learnMateria( AMateria*);
		AMateria*		createMateria( std::string const & type );
};

#endif
