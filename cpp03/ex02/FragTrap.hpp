/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:16:44 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/15 17:58:18 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(std::string name);
        FragTrap(const FragTrap & src);
        FragTrap & operator=(const FragTrap & src);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif