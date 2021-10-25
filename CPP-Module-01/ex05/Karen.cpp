/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 02:20:54 by mbari             #+#    #+#             */
/*   Updated: 2021/10/25 16:11:16 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-special-ketchup"
			<< " burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost"
			<< " more money. You don’t put enough! "
			<< "If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming here for years and you just started "
			<< "working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak "
			<< "to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	std::string moods[] = {"debug", "info", "warning", "error"};
	void (Karen:: *mood[]) (void) = {
		mood[0] = &Karen::debug,
		mood[1] = &Karen::info,
		mood[2] = &Karen::warning,
		mood[3] = &Karen::error
	};
	for (int i = 0; i < 4; i++)
		if (moods[i] == level)
		{
			(this->*mood[i])();
			return ;
		}
}
