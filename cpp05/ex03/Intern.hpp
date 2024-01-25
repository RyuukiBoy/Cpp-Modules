/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:07:26 by oait-bad          #+#    #+#             */
/*   Updated: 2024/01/16 15:04:55 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    public :
        Intern();
        Intern(Intern const & src);
        ~Intern();
        Intern & operator=(Intern const & src);
        AForm *makeForm(std::string name, std::string target);
};

#endif
