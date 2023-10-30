/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:43:04 by marvin            #+#    #+#             */
/*   Updated: 2023/10/15 18:43:04 by marvin           ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif