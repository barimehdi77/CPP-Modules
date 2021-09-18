/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:20:16 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 15:03:28 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	public:
		ScavTrap();
		ScavTrap( std::string Name );
		ScavTrap( const ScavTrap & src );
		~ScavTrap();
		ScavTrap & operator = ( const ScavTrap &rhs );
		void	attack( std::string const & target );
		void	guardgate();
};


#endif
