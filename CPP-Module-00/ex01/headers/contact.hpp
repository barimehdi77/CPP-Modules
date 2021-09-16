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

class Contact
{
    private:
        std::string		_first_name;
        std::string		_last_name;
        std::string		_nicke_name;
        std::string		_darkest_secret;
        std::string		_phone_number;
    public:
        Contact(){};
        ~Contact(){};
        std::string		get_first_name();
        std::string		get_last_name();
        std::string		get_nicke_name();
        std::string		get_darkest_secret();
        std::string		get_phone_number();

        void  		set_first_name(std::string firstname);
        void  		set_last_name(std::string lastname);
        void  		set_nicke_name(std::string nickename);
        void  		set_darkest_secret(std::string darkestsecret);
        void        set_phone_number(std::string phonenumber);
};

#endif
