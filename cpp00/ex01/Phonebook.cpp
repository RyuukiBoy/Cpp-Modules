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
    this->contacts_count = 0;
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

void Phonebook::setContactsCount(int contacts_count)
{
    this->contacts_count = contacts_count;
}

int Phonebook::getContactsCount(void)
{
    return (this->contacts_count);
}

void Phonebook::addContact(void)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkest_secret);
    this->contacts[this->index].setFirstName(first_name);
    this->contacts[this->index].setLastName(last_name);
    this->contacts[this->index].setNickname(nickname);
    this->contacts[this->index].setPhoneNumber(phone_number);
    this->contacts[this->index].setDarkestSecret(darkest_secret);
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
    int i;
    std::string indexStr;
    int index;

    i = 0;
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
        i++;
    }
    std::cout << "Enter index: ";
    while (1)
    {
        std::cin >> indexStr;
        std::cin.ignore();
        if (indexStr.find_first_not_of("0123456789") == std::string::npos)
        {
            index = std::stoi(indexStr);
            if (index >= 0 && index < this->index)
            {
                this->contacts[index].printContact();
                break;
            }
            else
                std::cout << "Invalid index. Try again: ";
        }
        else
            std::cout << "Invalid index. Try again: ";
    }
}
