/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:07:35 by mbari             #+#    #+#             */
/*   Updated: 2021/09/16 18:52:06 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "Contact.hpp"
#include "colors.h"
#include <climits>

class Phonebook
{
    private:
        Contact _contacts[8];
        unsigned int     _current;
        unsigned int     _index;
        std::string  _firstname;
        std::string  _lastname;
        std::string  _nickename;
		std::string	_darkestsecret;
		std::string	_phonenumber;
    public:
        Phonebook();
        ~Phonebook(){};
        void	ft_add();
        void	ft_search();
		void	ft_display_contacts();
};

#endif
