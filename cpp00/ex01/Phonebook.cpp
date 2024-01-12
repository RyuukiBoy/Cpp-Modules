/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:15:51 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/05 12:15:51 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 0;
	std::cout << "Welcome to the Phonebook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Goodbye Mate !!" << std::endl;
}

void PhoneBook::setIndex(int index)
{
    this->index = index;
}

int PhoneBook::getIndex(void)
{
    return (this->index);
}

void Contact::setContact(void)
{
	std::string input;

	std::cout << "First name: ";
	if (!std::getline(std::cin, input))
		return ;
	setFirstName(input);
	std::cout << "Last name: ";
	if (!std::getline(std::cin, input))
		return ;
	setLastName(input);
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, input))
		return ;
	setNickname(input);
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, input))
		return ;
	setPhoneNumber(input);
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, input))
		return ;
	setDarkestSecret(input);
}

void PhoneBook::addContact(void)
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

void PhoneBook::searchContact(void)
{
    int i = 0;
	int index;
	std::string input;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	while (i < this->index && i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << rep_char(this->contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << rep_char(this->contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << rep_char(this->contacts[i].getNickname()) << std::endl;
		i++;
	}
	std::cout << "Enter index: ";
	if (!std::getline(std::cin, input))
		return ;
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
