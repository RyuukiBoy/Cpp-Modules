/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:07:53 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/29 10:19:30 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public :
        void complain(std::string level);
};

typedef void (Harl::*func)(void);

#endif