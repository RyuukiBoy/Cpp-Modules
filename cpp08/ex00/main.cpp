/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:40:43 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/03 15:20:28 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int arrInt[] = {1, 2, 3, 4, 5};
    std::vector<int> vecInt(arrInt, arrInt + sizeof(arrInt) / sizeof(int));
    vecInt.push_back(6);
    easyfind(vecInt, 6);
    vecInt.pop_back();
    easyfind(vecInt, 6);
    vecInt.push_back(7);
    easyfind(vecInt, 7);
    vecInt.clear();
    easyfind(vecInt, 0);
}