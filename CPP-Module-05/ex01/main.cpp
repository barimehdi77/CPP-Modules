/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/18 17:05:56 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// test the GardeIncrement()
	try
	{
		Bureaucrat bari("Bari", 2);

		std::cout << bari;
		bari.GardeIncrement();
		std::cout << bari;
		bari.GardeIncrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the GardeDecrement()
	try
	{
		Bureaucrat sameone("Sameone", 149);

		std::cout << sameone;
		sameone.GradeDecrement();
		std::cout << sameone;
		sameone.GradeDecrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the Bureaucrat constractor
	try
	{
		Bureaucrat sameone("Sameone", 999);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat sameone("Sameone", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
