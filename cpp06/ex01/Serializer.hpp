/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:21:50 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/23 11:52:48 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

typedef struct Data
{
    std::string s;
    int n;
}              Data;

class Serializer
{
    public :
        Serializer(void);
        Serializer(Serializer const & src);
        ~Serializer(void);
        Serializer & operator=(Serializer const & src);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif