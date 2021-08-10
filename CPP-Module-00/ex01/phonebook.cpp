/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:21:57 by mbari             #+#    #+#             */
/*   Updated: 2021/08/09 22:09:59 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    ft_display()
{
    std::cout << CYAN;
    std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|                  1-ADD                  |" << std::endl;
    std::cout << "|                 2-SEARCH                |" << std::endl;
    std::cout << "|                  3-EXIT                 |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
    std::cout << RESET;
}

void	phonebook::ft_add()
{
	std::cout << PURPLE << "First Name: " << RESET;
	getline(std::cin, firstname);
	contacts[current].set_first_name(firstname);
	std::cout << PURPLE << "Last Name: " << RESET;
	getline(std::cin, lastname);
	contacts[current].set_last_name(lastname);
	std::cout << PURPLE << "Nickename: " << RESET;
	getline(std::cin, nickename);
	contacts[current].set_nicke_name(nickename);
	std::cout << PURPLE << "Phone number: " << RESET;
	getline(std::cin, phonenumber);
	contacts[current].set_phone_number(phonenumber);
	std::cout << PURPLE << "Darkest Secret: " << RESET;
	getline(std::cin, darkestsecret);
	contacts[current].set_darkest_secret(darkestsecret);
	current++;
	index++;
	std::cout << GREEN << "CONTACT ADDED SUCCESSFULY" << std::endl;
}

string	resize(string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	phonebook::ft_display_contacts()
{
	std::cout << YELLOW << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i 
		<< "|" << std::setw(10) << resize(contacts[i].get_first_name()) 
		<< "|" << std::setw(10) << resize(contacts[i].get_last_name())
		<< "|" << std::setw(10) << resize(contacts[i].get_nicke_name()) << "|"
		<< std::endl;
	}	
}

void	phonebook::ft_search()
{
	ft_display_contacts();
}

int main()
{
    phonebook phonebook;
    string command;

    ft_display();
    while (1337)
    {
        std::cout << BLUE "> " << RESET;
        getline(std::cin, command);
        if (command == "ADD")
            phonebook.ft_add();
        else if (command == "SEARCH")
			phonebook.ft_search();
        else if (command == "EXIT")
		{
			std::cout << YELLOW << "GOOD BYE" << std::endl;
			break;
		}
        else
        {
            std::cout << RED "COMMAND NOT FOUND!" << std::endl;
        }
    }
}