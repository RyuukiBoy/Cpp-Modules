/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:10 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/09 14:40:10 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		exit(1);
	}
	Zombie *zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}
