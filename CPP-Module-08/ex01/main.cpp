/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:43:10 by mbari             #+#    #+#             */
/*   Updated: 2021/11/16 11:53:44 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "-------------------|Subject main test|--------------------\n";
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Adding numbers More than N|--------------------\n";
	try
	{
		Span sp = Span(3);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Adding Numbers using Template function|--------------------\n";
	try
	{
		std::vector<int> random;
		Span sp = Span(10000);
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			const int value = rand();
			random.push_back(value);
		}
		sp.addNumber(random.begin(), random.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Adding Continer Bigger than N|--------------------\n";
	try
	{
		std::vector<int> random;
		Span sp = Span(7);
		srand(time(NULL));
		for (int i = 0; i < 77; i++)
		{
			const int value = rand();
			random.push_back(value);
		}
		sp.addNumber(random.begin(), random.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Calling longestSpan with emoty Container|--------------------\n";
	try
	{
		Span sp = Span(7);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Calling shortestSpan with emoty Container|--------------------\n";
	try
	{
		Span sp = Span(7);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Calling longestSpan with one Number|--------------------\n";
	try
	{
		Span sp = Span(7);
		sp.addNumber(77);
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-------------------|Calling shortestSpan with one Number|--------------------\n";
	try
	{
		Span sp = Span(7);
		sp.addNumber(77);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
