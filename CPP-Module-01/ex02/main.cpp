/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:58:09 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 19:09:03 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std::string;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	std::cout << "the address in memory of the string: " << &str << std::endl;
	std::cout << "the address of the string using stringPTR: " << stringPTR << std::endl;
	std::cout << "the address of the string using stringERF: " << &stringREF << std::endl;
	std::cout << "display the string using the pointer: " << *stringPTR << std::endl;
	std::cout << "display the string using the reference: " << stringREF<< std::endl;
}
