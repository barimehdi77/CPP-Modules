/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:37:28 by mbari             #+#    #+#             */
/*   Updated: 2021/08/18 18:44:34 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void			announce( void );
		std::string		getname();
		void			setname(std::string _name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
