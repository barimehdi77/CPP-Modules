/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:28:01 by mbari             #+#    #+#             */
/*   Updated: 2021/11/10 18:37:12 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 7
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << "-------------------|numbers VS mirror|--------------------\n";
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << numbers[i] << "|";
	std::cout << std::endl;
	for (size_t i = 0; i < MAX_VAL; i++)
		std::cout << "|" << mirror[i] << "|";
	std::cout << std::endl;
    //SCOPE
    {
		std::cout << "-----------------|numbers VS tmp VS test|-----------------\n";
        Array<int> tmp = numbers;
        Array<int> test(tmp);
		for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << numbers[i] << "|";
		std::cout << std::endl;
		for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << test[i] << "|";
		std::cout << std::endl;
		for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << tmp[i] << "|";
		std::cout << std::endl;
    }
	std::cout << "-----------------|Compare numbers VS mirror|-----------------\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "\t\t Numbers and mirror are the same!\n";
	std::cout << "-----------------|test the [] operator with -2|-----------------\n";
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "-----------------|test the [] operator with MAX_VAL|-----------------\n";
	std::cout << "\t\t the value of numbers[MAX_VAL] is " << numbers[MAX_VAL] << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "\t\t the new value of numbers[MAX_VAL] is " << numbers[MAX_VAL] << std::endl;
	std::cout << "-----------------|Change the values of numbers|-----------------\n";
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	for (size_t i = 0; i < MAX_VAL; i++)
			std::cout << "|" << numbers[i] << "|";
	std::cout << std::endl;
    delete [] mirror;//
    return 0;
}
