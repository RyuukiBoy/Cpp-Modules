/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:17:26 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 13:17:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon& weapon;
    public :
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();
};

#endif