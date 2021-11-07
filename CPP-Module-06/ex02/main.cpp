/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:42:51 by mbari             #+#    #+#             */
/*   Updated: 2021/11/06 12:05:24 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

struct Data
{
	int		i1;
	int		i2;
	char	c;
	bool	b;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.i1 = 7;
	data.i2 = 77;
	data.c = 'M';
	data.b = true;

	std::cout << data.i1 << std::endl;
	std::cout << data.i2 << std::endl;
	std::cout << data.c << std::endl;
	std::cout << data.b << std::endl;
	std::cout << "-----------------------" << std::endl;
	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << ptr->i1 << std::endl;
	std::cout << ptr->i2 << std::endl;
	std::cout << ptr->c << std::endl;
	std::cout << ptr->b << std::endl;


	return (0);
}
