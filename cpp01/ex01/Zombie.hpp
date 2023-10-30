/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:14:41 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 17:14:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private :
        std::string name;
        std::string type;
    public :
        Zombie();
        ~Zombie();
        void announce();
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif