/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/23 19:29:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
	try
	{
		ShrubberyCreationForm	test("happy");
		Bureaucrat				worker("worker", 77);

		std::cout << test.getName() << std::endl;
		std::cout << test.getisSigned() << std::endl;
		std::cout << test.getReqGradeToSign() << std::endl;
		std::cout << test.getReqGradeToExecute() << std::endl;
		test.beSigned(worker);
		test.execute(worker);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
