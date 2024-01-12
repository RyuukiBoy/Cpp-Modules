/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:44:12 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 16:27:18 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("[ GEAR 5 ] Luffy");

    scav.attack("Kaido");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();
    return (0);
}