/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:21:57 by mbari             #+#    #+#             */
/*   Updated: 2021/10/22 16:41:25 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Phonebook.hpp"

Phonebook::Phonebook(){_current = 0;_index = 0;};

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

void	Phonebook::ft_add()
{
	Contact tmp;
	std::cout << PURPLE << "First Name: " << RESET;
	getline(std::cin, _firstname);
	tmp.set_first_name(_firstname);
	std::cout << PURPLE << "Last Name: " << RESET;
	getline(std::cin, _lastname);
	tmp.set_last_name(_lastname);
	std::cout << PURPLE << "Nickename: " << RESET;
	getline(std::cin, _nickename);
	tmp.set_nicke_name(_nickename);
	std::cout << PURPLE << "Phone number: " << RESET;
	getline(std::cin, _phonenumber);
	tmp.set_phone_number(_phonenumber);
	std::cout << PURPLE << "Darkest Secret: " << RESET;
	getline(std::cin, _darkestsecret);
	tmp.set_darkest_secret(_darkestsecret);
	this->_contacts[_current % 8] = tmp;
	this->_current++;
	if (this->_current <= 8)
		this->_index = this->_current;
	std::cout << GREEN << "CONTACT ADDED SUCCESSFULY" << std::endl;
}

std::string	resize(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void	Phonebook::ft_display_contacts()
{
	std::cout << YELLOW << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << resize(_contacts[i].get_first_name())
		<< "|" << std::setw(10) << resize(_contacts[i].get_last_name())
		<< "|" << std::setw(10) << resize(_contacts[i].get_nicke_name()) << "|"
		<< std::endl;
	}
}

void	Phonebook::ft_search()
{
	unsigned int index;
	ft_display_contacts();
	std::cout << BLUE << "Enter The index: " << RESET;
	std::cin >> index;
	if (std::cin.fail())
		std::cout << RED << "INDEX INVALID !\n" << RESET;
	else
	{
		if (index < this->_index)
		{
			std::cout << "First Name: " << this->_contacts[index].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].get_last_name() << std::endl;
			std::cout << "NickeName: " << this->_contacts[index].get_nicke_name() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].get_phone_number() << std::endl;
			std::cout << "Darkest Secret: " << this->_contacts[index].get_darkest_secret() << std::endl;
		}
		else
			std::cout << RED << "INDEX INVALID !\n" << RESET;
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int main()
{
    Phonebook Phonebook;
    std::string command;

    ft_display();
    while (1337)
    {
        std::cout << BLUE "> " << RESET;
        getline(std::cin, command);
        if (command == "ADD")
            Phonebook.ft_add();
        else if (command == "SEARCH")
			Phonebook.ft_search();
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
