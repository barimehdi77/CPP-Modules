/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:13:03 by mbari              #+#    #+#             */
/*   Updated: 2021/08/09 20:44:30 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
using std::string;

class contact
{
    private:
        string		first_name;
        string		last_name;
        string		nicke_name;
        string		darkest_secret;
        string      phone_number;
    public:
        contact(){};
        ~contact(){return;};
        string		get_first_name();
        string		get_last_name();
        string		get_nicke_name();
        string		get_darkest_secret();
        string      get_phone_number();
        
        void  		set_first_name(string firstname);
        void  		set_last_name(string lastname);
        void  		set_nicke_name(string nickename);
        void  		set_darkest_secret(string darkestsecret);
        void        set_phone_number(string phonenumber);
};

#endif