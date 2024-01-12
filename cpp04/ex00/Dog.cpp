/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:38:53 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/16 11:24:52 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog & src)
{
    *this = src;
}

Dog & Dog::operator=(const Dog & src)
{
    if (this != &src)
        this->_type = src._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog's Sound ==> [Bark Bark......!!!!!]" << std::endl;
}

