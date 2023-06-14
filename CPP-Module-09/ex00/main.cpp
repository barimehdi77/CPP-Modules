/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:31:18 by mbari             #+#    #+#             */
/*   Updated: 2023/06/13 12:23:02 by barimehdi77      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int ac, char **av) {

	BitcoinExchange bitcoin;

	(void)av;
	if (ac != 2) {
		std::cout << "Error: No file!" << std::endl;
		return 1;
	}

	bitcoin.parseDataFile();
	bitcoin.parseInputFile(av[1]);

}
