/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:42:16 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/25 12:13:10 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
        std::cout << arr[i] << std::endl;
    }
    try
    {
        std::cout << arr[6] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "out of range" << std::endl;
    }
    try
    {
        Array<int> arr2(6);
        for (unsigned int i = 0; i < 10; i++)
        {
            arr2[i] = i;
            std::cout << arr2[i] << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << "out of range" << std::endl;
    }
    Array<int> arr3;
    arr3 = arr;
    for (unsigned int i = 0; i < arr3.size(); i++)
    {
        arr3[i] = i;
        std::cout << arr3[i] << std::endl;
    }
}