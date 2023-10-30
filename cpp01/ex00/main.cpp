/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:45:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 18:45:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    zombie = newZombie("Zombie1");
    zombie->announce();
    delete zombie;
    randomChump("Zombie2");
    return (0);
}
