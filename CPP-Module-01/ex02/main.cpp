/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:58:09 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 19:13:56 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	std::cout << "the address in memory of the string: \r\t\t\t\t\t\t" << &str << std::endl;
	std::cout << "the address of the string using stringPTR: \r\t\t\t\t\t\t" << stringPTR << std::endl;
	std::cout << "the address of the string using stringERF: \r\t\t\t\t\t\t" << &stringREF << std::endl;
	std::cout	<< "-----------------------------------------------------------------" << std::endl;
	std::cout << "display the string using the pointer: \r\t\t\t\t\t\t" << *stringPTR << std::endl;
	std::cout << "display the string using the reference: \r\t\t\t\t\t\t" << stringREF<< std::endl;
}
