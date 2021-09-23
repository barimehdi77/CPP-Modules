/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:31:22 by mbari             #+#    #+#             */
/*   Updated: 2021/09/23 10:27:03 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		string	_Name;
		Weapon	&_Weapon;
	public:
		HumanA( string Name, Weapon &Weapon );
		~HumanA();
		void	attack();
		string	getName();
		void	setName( string Name );
};

#endif
