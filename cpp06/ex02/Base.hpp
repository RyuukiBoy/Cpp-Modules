/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:22:32 by oait-bad          #+#    #+#             */
/*   Updated: 2024/02/11 09:26:11 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
    public :
        virtual ~Base(void);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

void identify(Base* p);
void identify(Base& p);
Base * generate(void);

#endif