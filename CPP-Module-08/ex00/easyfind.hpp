/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:44:55 by mbari             #+#    #+#             */
/*   Updated: 2021/11/15 14:18:10 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
class NotExist: public std::exception
{
	virtual const char* what() const throw();
};

template <typename T>
void	easyfind(T container, int N)
{
	if (std::find(container.begin(), container.end(), N) != container.end())
		std::cout << "The Number " << N << " Existed" << std::endl;
	else
		throw NotExist();
}

#endif
