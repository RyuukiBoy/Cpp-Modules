/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:09:43 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/19 11:14:51 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("home", 1);
        PresidentialPardonForm p("The Devil");
        RobotomyRequestForm r("Robot");
        ShrubberyCreationForm s("Home");
        std::cout << "----------[ PRESIDENTIAL PARDON FORM ]----------" << std::endl;
        p.execute(bureaucrat);
        std::cout << "----------[ ROBOTOMY REQUEST FORM ]----------" << std::endl;
        r.execute(bureaucrat);
        r.execute(bureaucrat);
        r.execute(bureaucrat);
        r.execute(bureaucrat);
        r.execute(bureaucrat);
        std::cout << "----------[ SHRUBBERY CREATION FORM ]----------" << std::endl;
        s.execute(bureaucrat);
        std::cout << "Shrubbery tree created !" << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout<< e.what() << '\n';
    }
    return 0;
}