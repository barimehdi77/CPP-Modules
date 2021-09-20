/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 12:38:24 by mbari             #+#    #+#             */
/*   Updated: 2021/09/20 12:45:30 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string	_ideas[100];
	public:
		Brain();
		Brain( const Brain & src );
		~Brain();
		Brain & operator = ( const Brain &rhs );
};


#endif
