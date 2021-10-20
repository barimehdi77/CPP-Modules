/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:00:17 by mbari             #+#    #+#             */
/*   Updated: 2021/10/20 16:49:48 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog( const Dog &src );
		~Dog();
		Dog & operator = ( const Dog &rhs );
		void makeSound() const;
};

#endif
