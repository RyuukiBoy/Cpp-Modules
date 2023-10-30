/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Seds.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:42:57 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/28 12:39:19 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDS_HPP
#define SEDS_HPP

#include <iostream>
#include <fstream>
#include <string>

class Seds
{
    private :
        std::string _filename;
        std::string _s1;
        std::string _s2;
    public :
        Seds(std::string filename, std::string s1, std::string s2);
        ~Seds();
        std::string replace(std::string str, std::string s1, std::string s2);
};

#endif