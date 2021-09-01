/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 02:45:10 by mbari             #+#    #+#             */
/*   Updated: 2021/09/01 02:57:39 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;
	std::string moods[] = {"debug", "info", "warning", "error"};
	if (ac != 1)
	{
		int i = 0;
		for (; i < 4; i++)
			if (moods[i] == av[1])
				break;
		switch (i)
		{
			case 0:
				while(i < 4)
					karen.complain(moods[i++]);
				break;
			case 1:
				while(i < 4)
					karen.complain(moods[i++]);
				break;
			case 2:
				while(i < 4)
					karen.complain(moods[i++]);
				break;
			case 3:
				while(i < 4)
					karen.complain(moods[i++]);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
}
