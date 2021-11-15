/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:44:39 by mbari             #+#    #+#             */
/*   Updated: 2021/11/15 14:19:46 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char* NotExist::what() const throw()
{
	return ("EasyFind Exception: The Number Not Found!");
}

int main()
{
	try
	{
		std::vector<int> vec;

		vec.push_back(7);
		vec.push_back(69 + 8);
		vec.push_back(777);
		vec.push_back(7777);
		vec.push_back(77777);
		easyfind(vec, 77);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int> vec;

		vec.push_back(7);
		vec.push_back(69 + 8);
		vec.push_back(777);
		vec.push_back(7777);
		vec.push_back(77777);
		easyfind(vec, 787);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
