/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:10:27 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/19 11:19:09 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern & Intern::operator=(Intern const & src)
{
    (void)src;
    return *this;
}

Intern::~Intern()
{
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    AForm *form[] = {new RobotomyRequestForm(target), new ShrubberyCreationForm(target), new PresidentialPardonForm(target)};
    std::string formName [] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    AForm *resultForm = NULL;

    for (int i = 0; i < 3; i++)
    {
        if (name == formName[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            resultForm = form[i];
        }
    }
    if (resultForm == NULL)
        std::cout << "Intern creation failed !!" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        if (form[i] != resultForm)
            delete form[i];
    }
    return resultForm;
}
