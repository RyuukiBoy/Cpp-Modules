/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:48:41 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 14:48:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string command;

    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
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
