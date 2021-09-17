/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:55:47 by mbari             #+#    #+#             */
/*   Updated: 2021/09/17 19:32:13 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main( void )
{
	ClapTrap mehdi("mehdi");
	ClapTrap ayoub("ayoub");

	ayoub.beRepaired(10);
	mehdi.attack("ayoub");
	ayoub.takeDamage(10);
	mehdi.beRepaired(10);
	ayoub.attack("mehdi");
	mehdi.takeDamage(10);
	return (0);
}
