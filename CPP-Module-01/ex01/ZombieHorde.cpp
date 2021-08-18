/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:19:54 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 18:44:28 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{
	Zombie * zom;

	zom = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zom[i].setname(name);
		zom[i].announce();
	}
	return (zom);
}
