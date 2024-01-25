/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:06:11 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/16 12:06:18 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src)
{
    *this = src;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
    (void)src;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::ofstream ofs(this->target + "_shrubbery");
    if (ofs.is_open())
    {
        ofs << "                      ___\n";
        ofs << "                _,-'\"\"   \"\"\"\"`--.\n";
        ofs << "             ,-`          __,,-- \\\n";
        ofs << "           ,'    __,--\"\"\"dF      )\n";
        ofs << "          /   .-\"Hb_,--\"\"dF      /\n";
        ofs << "        ,'       _Hb ___dF\"-._,-'\n";
        ofs << "      ,'      _,-\"\"\"\"   \"\"--..__\n";
        ofs << "     (     ,-'                  `.\n";
        ofs << "      `._,'     _   _             ;\n";
        ofs << "       ,'     ,' `-'Hb-.___..._,-'\n";
        ofs << "       \\    ,\"Hb.-'HH`-.dHF\"\n";
        ofs << "        `--'   \"Hb  HH  dF\"\n";
        ofs << "                \"Hb HH dF\n";
        ofs << "                 \"HbHHdF\n";
        ofs << "                  |HHHF\n";
        ofs << "                  |HHH|\n";
        ofs << "                  |HHH|\n";
        ofs << "                  |HHH|\n";
        ofs << "                  |HHH|\n";
        ofs << "                  dHHHb\n";
        ofs << "                .dFd|bHb.               o\n";
        ofs << "      o       .dHFdH|HbTHb.          o /\n";
        ofs << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n";
        ofs << "##########################################\n";
        ofs.close();
    }
    else
        std::cout << "Error opening file" << std::endl;
}
