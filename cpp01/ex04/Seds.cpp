/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:27:51 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/28 12:38:59 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Seds.hpp"

Seds::Seds(std::string filename, std::string s1, std::string s2)
{
    this->_filename = filename;
    this->_s1 = s1;
    this->_s2 = s2;
}

Seds::~Seds()
{
}

std::string Seds::replace(std::string str, std::string s1, std::string s2)
{
    std::string res;
    std::string::size_type pos = 0;
    std::string::size_type prev = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos)
    {
        res += str.substr(prev, pos - prev);
        res += s2;
        pos += s1.length();
        prev = pos;
    }
    res += str.substr(prev);
    return (res);
}
