/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:10:53 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 17:37:04 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("[ GEAR 4 ] Luffy");

    clap.attack("Doflamingo");
    clap.takeDamage(5);
    clap.beRepaired(4);
    return (0);
}