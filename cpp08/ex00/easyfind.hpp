/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:28:31 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/29 15:34:18 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
void easyfind(T &container, int n)
{
    if (std::find(container.begin(), container.end(), n) != container.end())
        std::cout << "found" << std::endl;
    else
        std::cout << "not found" << std::endl;
}

#endif