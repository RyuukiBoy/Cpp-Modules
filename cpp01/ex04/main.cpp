/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:42:52 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/28 13:35:30 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seds.hpp"

int main(int ac, char **av)
{
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream ifs(filename);
    std::string line;
    std::string content;
    std::ofstream ofs(filename + ".replace");
    if (ac != 4)
    {
        std::cout << "usage: ./replace filename s1 s2" << std::endl;
        return (1);
    }
    if (s1.empty() || s2.empty())
    {
        std::cout << "s1 and s2 must not be empty" << std::endl;
        return (1);
    }
    Seds seds(filename, s1, s2);
    if (!ifs.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    while (std::getline(ifs, line))
    {
        content += line;
        content += "\n";
    }
    ifs.close();
    if (!ofs.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    ofs << seds.replace(content, s1, s2);
    ofs.close();
    return (0);
}