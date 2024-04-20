/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:16:12 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/13 11:52:47 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename T1>
void iter(T* array, size_t len, void (*f)(T1 &))
{
    if (!array)
        return ;
    for (size_t i = 0 ; i < len ; i++)
        f(array[i]);
}

#endif