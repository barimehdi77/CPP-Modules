/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:42:51 by mbari             #+#    #+#             */
/*   Updated: 2021/10/29 19:29:30 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <cstdint>
#include <type_traits>

int main(int ac, char **av)
{
	std::string ss(av[1]);
	int* test = dynamic_cast<int*>(ss);
	// long int test1 = 0;
	// ss >> test;

	if (ac == 2)
	{
		//   std::cout << "int: " << std::is_same<typeid(i).name(), int>::value  << std::endl;
		  std::cout << "int: " << typeid(test).hash_code() << std::endl;
		  std::cout << "int: " << typeid(int).hash_code() << std::endl;
		  std::cout << test;
	}
	return (0);
}
