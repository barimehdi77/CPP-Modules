/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/24 12:29:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
// #include <stdlib.h>

int main()
{
	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 77);

		std::cout << "Form Name: " << test.getName() << std::endl;
		std::cout << "Form Status: " << test.getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "Foem Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		test.beSigned(worker);
		test.execute(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		RobotomyRequestForm		test("happy");
		Bureaucrat				worker("worker", 7);

		std::cout << "Form Name: " << test.getName() << std::endl;
		std::cout << "Form Status: " << test.getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << test.getReqGradeToSign() << std::endl;
		std::cout << "Foem Requirement Grade to Execute: " << test.getReqGradeToExecute() << std::endl;
		test.beSigned(worker);
		test.execute(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
