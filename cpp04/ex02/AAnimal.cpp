/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:07:25 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/16 23:07:59 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal Default constructor called" << std::endl;
    this->_type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal & src)
{
    *this = src;
}

AAnimal & AAnimal::operator=(const AAnimal & src)
{
    if (this != &src)
        this->_type = src._type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal Makes a Sound......!!!!" << std::endl;
}
