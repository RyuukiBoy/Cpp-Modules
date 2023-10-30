/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:24:54 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 13:24:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}