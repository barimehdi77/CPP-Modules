/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:49:30 by mbari             #+#    #+#             */
/*   Updated: 2021/10/20 16:55:21 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->_Size = 0;
	this->_Sources = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		this->_Sources[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src ) { *this = src; }

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_Size; i++)
		delete this->_Sources[i];
	delete this->_Sources;
}

MateriaSource & MateriaSource::operator=( const MateriaSource &rhs )
{
	if (this == &rhs)
		return (*this);
	if (this->_Sources == NULL)
		delete [] this->_Sources;
	this->_Sources = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
	{
		if (rhs._Sources[i])
			this->_Sources[i] = rhs._Sources[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_Size  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->_Size; i++)
		if (this->_Sources[i] == m)
			return ;
	this->_Sources[this->_Size++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	// std::cout << type << std::endl;
	for (int i = 0; i < this->_Size; i++)
		if (this->_Sources[i]->getType() == type)
			return (this->_Sources[i]->clone());
	return (nullptr);
}
