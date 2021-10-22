/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/22 18:49:25 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// test the Form defult constructor
	try
	{
		Form test;

		std::cout << test.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the test the form pram constructor
	try
	{
		Form test("test", -10, 180);

		std::cout << test.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// test the a working form declaration
	try
	{
		Form		contract("Contract", 1, 5);
		Bureaucrat	director("Director", 1);

		std::cout << contract;

		director.singForm(contract);
		contract.beSigned(director);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// what will happend if you try to sign a form with a lower garde? let's see
	try
	{
		Form		Project("Project Approval", 5, 10);
		Bureaucrat	worker("worker", 77);

		std::cout << Project;

		worker.singForm(Project);
		Project.beSigned(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
