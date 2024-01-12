/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:27:34 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 16:04:35 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->_Name = name;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
    std::cout << "ClapTrap " << _Name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
    *this = src;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
{
    this->_Name = src._Name;
    this->_HitPoints = src._HitPoints;
    this->_EnergyPoints = src._EnergyPoints;
    this->_AttackDamage = src._AttackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _Name << " is destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints--;
    }
    if (_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << _Name << " has no energy to attack" << std::endl;
        return ;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints <= amount)
    {
        std::cout << "ClapTrap " << _Name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _Name << " take " << amount << " points of damage!" << std::endl;
    _HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_EnergyPoints <= amount)
    {
        std::cout << "ClapTrap " << _Name << " has no energy to be repaired" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _Name << " is repaired with " << amount << " points of energy!" << std::endl;
    _EnergyPoints--;
    _HitPoints += amount;
}
