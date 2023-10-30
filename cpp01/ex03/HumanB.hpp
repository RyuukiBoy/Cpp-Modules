/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:18:39 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 13:18:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon* weapon;
    public :
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& weapon);
};

#endif