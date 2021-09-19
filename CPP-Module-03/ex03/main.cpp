/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:55:47 by mbari             #+#    #+#             */
/*   Updated: 2021/09/19 16:24:04 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main( void )
{
	DiamondTrap first("first");
	DiamondTrap second("second");

	first.attack("second");
	second.takeDamage(30);
	second.attack("first");
	first.takeDamage(30);
	first.whoAmI();
	second.whoAmI();
	return (0);
}
