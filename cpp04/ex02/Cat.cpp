/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:38:08 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/16 21:56:14 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat()
{
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
    new Brain(*src._brain);
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