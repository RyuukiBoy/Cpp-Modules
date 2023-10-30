/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:29:07 by oait-bad          #+#    #+#             */
/*   Updated: 2023/10/29 10:29:20 by oait-bad         ###   ########.fr       */
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

#endif