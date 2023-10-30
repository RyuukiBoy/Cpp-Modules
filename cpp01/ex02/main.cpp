/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:58:11 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 12:58:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Pointer: " << stringPTR << std::endl;
    std::cout << "Reference: " << &stringREF << std::endl;
    
    std::cout << "Pointer: " << *stringPTR << std::endl;
    std::cout << "Reference: " << stringREF << std::endl;
    return (0);
}