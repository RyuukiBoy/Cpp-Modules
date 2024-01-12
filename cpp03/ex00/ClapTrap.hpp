/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:53:06 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 17:58:34 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private :
        std::string _Name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public :
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & src);
        ClapTrap & operator=(const ClapTrap & src);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif