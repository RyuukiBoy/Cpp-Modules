/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:39:45 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/09 14:39:45 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombies;

    zombies = zombieHorde(2, "Zombie");
    for (int i = 0; i < 2; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}