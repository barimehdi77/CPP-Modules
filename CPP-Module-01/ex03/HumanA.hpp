/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:31:22 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 20:47:33 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		string	name;
		Weapon	&weapon;
	public:
		HumanA( string _name, Weapon &_weapon );
		~HumanA();
		void	attack();
		string	getName();
		void	setName( string _name );
};

#endif
