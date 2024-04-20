/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:51:44 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/16 00:33:33 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange exchange;
    if (argc != 2)
    {
        std::cout << "Error: could not open file" << std::endl;
        return (1);
    }
    else
    {
        exchange.readData();
        exchange.InputFile(argv[1]);
    }
    return 0;
}
