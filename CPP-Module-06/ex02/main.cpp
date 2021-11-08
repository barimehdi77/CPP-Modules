/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:42:51 by mbari             #+#    #+#             */
/*   Updated: 2021/11/08 15:14:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "headers/Threeclasses.hpp"

Base * generate(void)
{
	srand((unsigned int)time(NULL));
	int	classType = rand() % 3;
	if (classType == 0)
		return (new A);
	else if (classType == 1)
		return (new B);
	else if (classType == 2)
		return (new C);
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	Base a;
	Base b;
	Base c;
	try
	{
		a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}catch(std::exception & e){}
	try
	{
		b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}catch(std::exception & e){}
	try
	{
		c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}catch(std::exception & e){}
}

int main()
{
	Base * ptr = generate();
	Base * ref = generate();

	identify(ptr);
	identify(*ref);
	delete ptr;
	delete ref;
	return (0);
}
