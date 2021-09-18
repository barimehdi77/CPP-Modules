/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:55:47 by mbari             #+#    #+#             */
/*   Updated: 2021/09/18 15:17:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main( void )
{
	ClapTrap mehdi("mehdi");
	ScavTrap ayoub("ayoub");

	ayoub.guardgate();
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.attack("ayoub");
	ayoub.takeDamage(20);
	mehdi.beRepaired(10);
	ayoub.attack("mehdi");
	mehdi.takeDamage(20);
	return (0);
}
