/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:19:12 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 20:18:13 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
using std::string;

class Weapon
{
	private:
		string type;
	public:
		Weapon( string _type );
		~Weapon();
		string const	&getType();
		void			setType( string _type);
};

#endif
