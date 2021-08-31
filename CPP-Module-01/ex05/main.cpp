/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 02:19:51 by mbari             #+#    #+#             */
/*   Updated: 2021/08/31 02:33:45 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;
	if (ac != 2)
		karen.complain(av[1]);
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
