/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:17:38 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/29 10:18:35 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string level;
    Harl harl;

    std::cout << "Enter the level of complain: ";
    std::cin >> level;
    harl.complain(level);
    return (0);
}