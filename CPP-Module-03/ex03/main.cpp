/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:55:47 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 15:45:27 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main( void )
{
	ClapTrap clapper("clapper");
	ScavTrap scaver("scaver");
	FragTrap fragger("fragger");

	clapper.attack("scaver");
	scaver.takeDamage(30);
	fragger.beRepaired(10);
	scaver.guardgate();
	clapper.attack("fragger");
	fragger.takeDamage(0);
	fragger.highFivesGuys();
	return (0);
}
