/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:15:32 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 17:15:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombies;

    zombies = zombieHorde(-2, "Zombie");
    for (int i = 0; i < 2; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}