/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:38:53 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/18 23:04:28 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog & src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = src;
}

Dog & Dog::operator=(const Dog & src)
{
    std::cout << "Dog Assignement operator called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog's Sound ==> [Bark Bark......!!!!!]" << std::endl;
}

