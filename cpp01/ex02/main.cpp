/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:18 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/09 14:40:18 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "-----------ADRESSES-----------" << std::endl;
    std::cout << "Pointer: " << stringPTR << std::endl;
    std::cout << "Reference: " << &stringREF << std::endl;
    std::cout << "-----------VALUES-------------" << std::endl;
    std::cout << "Pointer: " << *stringPTR << std::endl;
    std::cout << "Reference: " << stringREF << std::endl;
    return (0);
}