/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:15:12 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 16:20:39 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Name = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " unleashed his special form" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
    *this = src;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & src)
{
    this->_Name = src._Name;
    this->_HitPoints = src._HitPoints;
    this->_EnergyPoints = src._EnergyPoints;
    this->_AttackDamage = src._AttackDamage;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _Name << "'s special form is gone" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints--;
    }
    else
    {
        std::cout << "ScavTrap " << _Name << " has no energy to attack" << std::endl;
        return ;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _Name << " has enterred in Gate keeper mode" << std::endl;
}
