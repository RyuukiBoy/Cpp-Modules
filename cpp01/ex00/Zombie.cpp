/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:44:13 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 18:44:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
