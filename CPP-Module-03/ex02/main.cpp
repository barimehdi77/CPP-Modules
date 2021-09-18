/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:55:47 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 16:31:51 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");
	FragTrap fragger("fragger");

	scaver.guardgate();
	fragger.highFivesGuys();
	clapper.attack("fragger");
	fragger.takeDamage(20);
	fragger.attack("clapper");
	clapper.takeDamage(20);
	return (0);
}
