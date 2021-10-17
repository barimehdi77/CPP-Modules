/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:14 by mbari             #+#    #+#             */
/*   Updated: 2021/10/17 16:53:27 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bari("Bari", 2);
		Bureaucrat test("test", 150);
		Bureaucrat none("none", 1);

		none.GardeIncrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
