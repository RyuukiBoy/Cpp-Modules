/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:37:56 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/09 14:37:56 by oait-bad         ###   ########.fr       */
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