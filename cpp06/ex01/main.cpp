/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:32:08 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/11 09:38:07 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Serializer s;
    Data *d = new Data;
    uintptr_t raw;
    Data *d2;

    d->s = "hello";
    d->n = 42;

    raw = s.serialize(d);
    std::cout << "raw = " << raw << std::endl;
    d2 = s.deserialize(raw);
    std::cout << "d2->s = " << d2->s << std::endl;
    std::cout << "d2->n = " << d2->n << std::endl;
    return 0;
}