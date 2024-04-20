/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:58:31 by oait-bad          #+#    #+#             */
/*   Updated: 2024/04/17 23:58:31 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    RPN rpn;
    if (argc != 2)
    {
        std::cout << "Invalid Args" << std::endl;
        return (1);
    }
    rpn.CalculateIn(argv[1]);
    rpn.display();
    return (0);
}