/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:27:54 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 08:37:10 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCATRAP_HPP
# define SCATRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap & src);
        ScavTrap & operator=(const ScavTrap & src);
        ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};

#endif