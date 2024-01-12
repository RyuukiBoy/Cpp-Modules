/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:18:39 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 16:31:43 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap " << _Name << " is ready to fight" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
    *this = src;
}

FragTrap & FragTrap::operator=(const FragTrap & src)
{
    this->_Name = src._Name;
    this->_HitPoints = src._HitPoints;
    this->_EnergyPoints = src._EnergyPoints;
    this->_AttackDamage = src._AttackDamage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _Name << " won the fight and gone" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_EnergyPoints > 0)
    {
        std::cout << "FragTrap " << _Name << " attacks " << target << " causing " << _AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints--;
    }
    else
    {
        std::cout << "FragTrap " << _Name << " has no energy to attack" << std::endl;
        return ;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << _Name << " wants to high five" << std::endl;
}

