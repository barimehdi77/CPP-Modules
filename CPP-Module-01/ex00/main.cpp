/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:14:07 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 17:57:10 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nbr;
	int i;
	std::cout << "Print num of Zombie to Create (int) : ";
	std::cin >> nbr;
	std::cin.ignore();

	if (std::cin.fail())
		std::cout << "Wrong input!\n";
	else
	{
		i = 0;
		std::string name[nbr];
		while (i < nbr)
		{
			std::cout << "Name of Zombie number " << i + 1 << "/" << nbr << ": ";
			getline(std::cin, name[i]);
			i++;
		}
		std::cout << "-----------------------------------------------------------" << std::endl;
		i = 0;
		randomChump(name[rand() % nbr]);
	}
	return (0);
}
