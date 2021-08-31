/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 15:24:40 by mbari             #+#    #+#             */
/*   Updated: 2021/08/31 02:17:03 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::fstream;

std::string ft_replace(std::string line, std::string r_this, std::string r_with)
{
	int start = line.find(r_this);
	if (start != -1)
	{
		line.erase(start, r_this.length());
		line.insert(start, r_with);
	}
	return (line);
}

int ft_check_strings(std::string r_this, std::string r_with)
{
	if (r_this.empty())
	{
		std::cout << "ERROR: s1 can not be empty!" << std::endl;
		return (1);
	}
	else if (r_with.empty())
	{
		std::cout << "ERROR: s2 can not be empty!" << std::endl;
		return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	std::string line;
	fstream f_in(av[1], fstream::in);
	if (ac != 4)
	{
		std::cout << "Error Args\n";
		return (1);
	}
	if (f_in.is_open())
	{
		std::string f_name(av[1]);
		if (ft_check_strings(av[2], av[3]))
			return (1);
		fstream f_out(f_name + ".replace", fstream::out);
		while (getline(f_in, line))
		{
			line = ft_replace(line, av[2], av[3]);
			f_out << line << std::endl;
		}
	}
	else
		std::cout << "Error in open file " << std::endl;
	return (0);
}
