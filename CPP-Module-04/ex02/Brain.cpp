/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:41:04 by mbari             #+#    #+#             */
/*   Updated: 2021/09/20 17:12:59 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src ) { *this = src; }

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=( const Brain &rhs )
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}
