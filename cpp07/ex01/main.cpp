/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:20:50 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/13 11:59:31 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void printer(T &input)
{
    std::cout << input << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3};
    iter(arr, 2, printer<int>);
    std::cout << std::endl;
    std::string yonko[] = {"Monkey D Luffy", "Akagami no Shanks", "Marshall D Teach", "Buggy The Clown"};
    iter(yonko, 4, printer<std::string>);
}

