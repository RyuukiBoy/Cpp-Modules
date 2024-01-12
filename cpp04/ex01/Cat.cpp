/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:38:08 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/18 23:04:22 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat's Sound ==> [Meaow Meaow.....!!!!]" << std::endl;
}

Cat::Cat(const Cat & src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = src;
}

Cat & Cat::operator=(const Cat & src)
{
    std::cout << "Cat Assignement operator called" << std::endl;
    if (this != &src)
    {
        this->_type = src._type;
        this->_brain = new Brain(*src._brain);
    }
    return *this;
}