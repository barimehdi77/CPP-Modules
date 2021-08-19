/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:15:08 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 20:51:42 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		string	name;
		Weapon	*weapon;
	public:
		HumanB( string _name );
		~HumanB();
		void	attack();
		string	getName();
		void	setName( string _name );
		void	setWeapon( Weapon &_weapon );
};

#endif
