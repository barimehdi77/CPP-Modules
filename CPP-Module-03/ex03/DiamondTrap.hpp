/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:19:19 by mbari             #+#    #+#             */
/*   Updated: 2021/09/19 16:16:39 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	public:
		DiamondTrap();
		DiamondTrap( std::string Name );
		DiamondTrap( const DiamondTrap &src );
		~DiamondTrap();
		DiamondTrap & operator = ( const DiamondTrap &rhs );
		void	attack( std::string const & target );
		void	whoAmI();
};


#endif
