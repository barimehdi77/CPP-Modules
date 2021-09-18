/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:24:34 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 15:29:13 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	private:
		std::string	_Name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	public:
		FragTrap();
		FragTrap( std::string Name );
		FragTrap( const FragTrap &src );
		~FragTrap();
		FragTrap & operator = ( const FragTrap &rhs );
		void	highFivesGuys( void );
};



#endif
