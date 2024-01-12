/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:35:13 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/17 22:18:46 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
    this->_type = "Animal";
}

Animal::Animal(const Animal & src)
{
    *this = src;
}

Animal & Animal::operator=(const Animal & src)
{
    if (this != &src)
        this->_type = src._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal Makes a Sound......!!!!" << std::endl;
}

