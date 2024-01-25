/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:37:46 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/19 10:41:55 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "Example 1: " << std::endl;
    try
    {
        Bureaucrat b("b1", 1);
        Form f("f", 1, 92);
        std::cout << b;
        std::cout << f;
        b.signForm(f);
        std::cout << f;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "\nExample 2: " << std::endl;
    try
    {
        Bureaucrat b("b2", 150);
        Form f("f", 2, 5);
        std::cout << b;
        std::cout << f;
        b.signForm(f);
        std::cout << f;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}
