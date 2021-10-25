/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/25 17:26:53 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include <stdlib.h>

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat					worker("worker", 7);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << "Form Name: " << rrf->getName() << std::endl;
		std::cout << "Form Status: " << rrf->getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << rrf->getReqGradeToSign() << std::endl;
		std::cout << "Form Requirement Grade to Execute: " << rrf->getReqGradeToExecute() << std::endl;
		rrf->beSigned(worker);
		rrf->execute(worker);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat					worker("worker", 7);

		rrf = someRandomIntern.makeForm("Some Random Form", "Bender");
		std::cout << "Form Name: " << rrf->getName() << std::endl;
		std::cout << "Form Status: " << rrf->getisSigned() << std::endl;
		std::cout << "Form requirement Grade to Sign: " << rrf->getReqGradeToSign() << std::endl;
		std::cout << "Form Requirement Grade to Execute: " << rrf->getReqGradeToExecute() << std::endl;
		rrf->beSigned(worker);
		rrf->execute(worker);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
