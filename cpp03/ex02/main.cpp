/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:29:17 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 10:39:40 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Luffy");

    frag.attack("Ussop");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return (0);
}