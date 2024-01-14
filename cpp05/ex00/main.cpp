/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:09:24 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/13 19:07:21 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "Example 1: " << std::endl;
    try
    {
        Bureaucrat b("a", 1);
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Example 2: " << std::endl;
    try
    {
        Bureaucrat b("b", 150);
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "Example 3: " << std::endl;
    try
    {
        Bureaucrat b("c", 30);
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}