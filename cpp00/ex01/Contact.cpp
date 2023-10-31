/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:32:35 by marvin            #+#    #+#             */
/*   Updated: 2023/10/04 12:32:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void Contact::setFirstName(std::string firstName)
{
    this->first_name = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->last_name = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phone_number = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkest_secret = darkestSecret;
}

std::string Contact::getFirstName(void)
{
    return (this->first_name);
}

std::string Contact::getLastName(void)
{
    return (this->last_name);
}

std::string Contact::getNickname(void)
{
    return (this->nickname);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phone_number);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->darkest_secret);
}

void Contact::printContact(void)
{
    std::cout << "First name: " << this->first_name << std::endl;
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phone_number << std::endl;
    std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

