/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:15:08 by mbari             #+#    #+#             */
/*   Updated: 2021/09/23 10:29:10 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		string	_Name;
		Weapon	*_Weapon;
	public:
		HumanB( string Name );
		~HumanB();
		void	attack();
		string	getName();
		void	setName( string Name );
		void	setWeapon( Weapon &Weapon );
};

#endif
