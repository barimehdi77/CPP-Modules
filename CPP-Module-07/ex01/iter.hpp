/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:33:54 by mbari             #+#    #+#             */
/*   Updated: 2021/11/10 16:11:20 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, int size, void (*f)(T const &val))
{
	for (int i = 0; i < size; i++)
		(*f)(arr[i]);
}

template <typename T>
void print(T const &val)
{
	std::cout << val << std::endl;
}

#endif
