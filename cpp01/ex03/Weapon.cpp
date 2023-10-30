/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:19:25 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 13:19:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return (this->type);
}

