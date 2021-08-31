/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 02:20:54 by mbari             #+#    #+#             */
/*   Updated: 2021/08/31 02:40:55 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


Karen::void	debug( void )
{
	std::cout << "I love to get extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-special-ketchup"
			<< " burger. I just love it!" << std::endl;
}

Karen::void	info( void )
{
	std::cout << "I cannot believe adding extra bacon cost"
			<< " more money. You don’t put enough! "
			<< "If you did I would not have to ask for it!" << std::endl;
}

Karen::void	warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming here for years and you just started "
			<< "working here last month." << std::endl;
}

Karen::void	error( void )
{
	std::cout << "This is unacceptable, I want to speak "
			<< "to the manager now." << std::endl;
}

Karen::void	complain( std::string level )
{
	
}
