/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:18:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 13:18:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type);
        std::string getType();
};

#endif