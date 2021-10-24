/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/24 13:50:01 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// #include <stdlib.h>

int main()
{
	// all those tries will work fine
	std::cout << "|-------------------|all those tries will work fine|-----------------------|" << std::endl;
	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 77);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		test.beSigned(worker);
		test.execute(worker);
		std::cout << "|\t";
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm		test("happy");
		Bureaucrat				worker("worker", 7);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		test.beSigned(worker);
		test.execute(worker);
		std::cout << "|\t";
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm		test("happy");
		Bureaucrat					worker("worker", 2);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		test.beSigned(worker);
		test.execute(worker);
		std::cout << "|\t";
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// Those tries will not work cuz the Bureaucrat Has a lower garde
	std::cout << "|-----|Those tries will not work cuz the Bureaucrat Has a lower garde|-----|" << std::endl;

	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 140);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		test.beSigned(worker);
		test.execute(worker);
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm		test("happy");
		Bureaucrat				worker("worker", 46);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		test.beSigned(worker);
		test.execute(worker);
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm		test("happy");
		Bureaucrat					worker("worker", 7);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		test.beSigned(worker);
		test.execute(worker);
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// no one signed this forms so an exception will be thrown
	std::cout << "|--------|no one signed this forms so an exception will be thrown|--------|" << std::endl;
	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 140);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		// test.beSigned(worker);
		test.execute(worker);
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm		test("happy");
		Bureaucrat				worker("worker", 46);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		// test.beSigned(worker);
		test.execute(worker);
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		PresidentialPardonForm		test("happy");
		Bureaucrat					worker("worker", 7);

		std::cout << "|\tForm Name: " << test.getName() << std::endl;
		std::cout << "|\tForm Status: " << test.getisSigned() << std::endl;
		std::cout << "|\tForm requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "|\tForm Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		std::cout << "|\t";
		// test.beSigned(worker);
		test.execute(worker);
		worker.executeForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "|--------------------------------------------------------------------------|" << std::endl;
}
