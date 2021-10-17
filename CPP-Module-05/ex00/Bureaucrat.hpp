/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:04:35 by mbari             #+#    #+#             */
/*   Updated: 2021/10/17 16:19:38 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		std::string	_Name;
		unsigned int		_Grade;
	public:
		Bureaucrat( const std::string Name, int Grade );
		~Bureaucrat();
		std::string		getName();
		unsigned int	getGrage();
		void			GardeIncrement();
		void			GradeDecrement();
};


#endif
