/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:07:04 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/16 23:09:47 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(const AAnimal & src);
        virtual ~AAnimal();
        AAnimal & operator=(const AAnimal & src);
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif