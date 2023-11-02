/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:33:15 by marvin            #+#    #+#             */
/*   Updated: 2023/10/03 17:33:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->index = 0;
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

void Phonebook::setIndex(int index)
{
    this->index = index;
}

int Phonebook::getIndex(void)
{
    return (this->index);
}

void Contact::setContact(void)
{
	std::string input;

	std::cout << "First name: ";
	std::getline(std::cin, input);
	setFirstName(input);
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	setNickname(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	setPhoneNumber(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	setDarkestSecret(input);
}

void Phonebook::addContact(void)
{
	int i = this->index % 8;
	this->contacts[i].setContact();
	this->index++;
}

std::string rep_char(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void Phonebook::searchContact(void)
{
    int i = 0;
	int index;
	std::string input;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	while (i < this->index)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << rep_char(this->contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << rep_char(this->contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << rep_char(this->contacts[i].getNickname()) << std::endl;
		if ()
		i++;
	}
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	if (input.find_first_not_of("0123456789") == std::string::npos)
	{
		index = atoi(input.c_str());
		if (index >= 0 && index < this->index)
			this->contacts[index].printContact();
		else
			std::cout << "Invalid index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}
