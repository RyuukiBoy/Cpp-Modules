/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:38:08 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/16 11:24:33 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat & src)
{
    *this = src;

}
Cat & Cat::operator=(const Cat & src)
{
    if (this != &src)
        this->_type = src._type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat's Sound ==> [Meaow Meaow.....!!!!]" << std::endl;
}

