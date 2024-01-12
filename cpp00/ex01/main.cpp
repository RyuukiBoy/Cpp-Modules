/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:16:22 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/05 12:16:22 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command: ";
        if (!std::getline(std::cin, command))
			break;
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
        {
			phonebook.addContact();
        }
        else if (command == "SEARCH")
        {
			if (phonebook.getIndex() > 0)
                phonebook.searchContact();
            else
                std::cout << "Phonebook is empty" << std::endl;
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}
