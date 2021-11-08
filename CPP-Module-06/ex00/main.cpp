/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:42:51 by mbari             #+#    #+#             */
/*   Updated: 2021/11/08 15:17:55 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <cstdint>
#include <iomanip>
#include <type_traits>
#include "headers/Casts.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac == 2)
		{
			Casts Number(av[1]);
			if (Number.getType() == 'i')
				Number.FromInt();
			else if (Number.getType() == 'f')
				Number.FromFloat();
			else if (Number.getType() == 'c')
				Number.FromChar();
			else if (Number.getType() == 'd')
				Number.FromDouble();
			std::cout << "Char: " << Number.print('c', av[1]) << std::endl;
			std::cout << "Int: " << Number.print('i', av[1]) << std::endl;
			std::cout << "Float: " << Number.print('f', av[1]) << std::endl;
			std::cout << "Double: " << Number.print('d', av[1]) << std::endl;
		}
		else
		{
			std::cout << "Error: Enter one argument!" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
