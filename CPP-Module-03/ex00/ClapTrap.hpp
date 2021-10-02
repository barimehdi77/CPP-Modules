/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:45:10 by mbari             #+#    #+#             */
/*   Updated: 2021/10/02 10:08:48 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	public:
		ClapTrap();
		ClapTrap( std::string Name );
		ClapTrap( const ClapTrap &src );
		~ClapTrap();
		ClapTrap & operator = ( const ClapTrap &rhs );
		void	attack( std::string const & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
};

#endif
