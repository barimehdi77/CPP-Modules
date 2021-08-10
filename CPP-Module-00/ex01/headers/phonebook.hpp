/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:07:35 by mbari             #+#    #+#             */
/*   Updated: 2021/08/10 04:22:22 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "contact.hpp"
#include "colors.h"
#include <climits>

using std::string;

class phonebook
{
    private:
        contact contacts[8];
        int     current;
        int     index;
        string  firstname;
        string  lastname;
        string  nickename;
		string	darkestsecret;
		string	phonenumber;
    public:
        phonebook(){current = 0;index = 0;};
        ~phonebook(){return;};
        void	ft_add();
        void	ft_search();
		void	ft_display_contacts();   
};

#endif