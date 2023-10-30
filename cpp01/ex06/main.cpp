/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:41:44 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/29 10:42:17 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(av[1]);
    return (0);
}