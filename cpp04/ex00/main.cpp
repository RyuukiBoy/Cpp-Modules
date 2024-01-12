/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:42:30 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/16 10:57:13 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrongA = new WrongAnimal();

    std::cout << std::endl;
    std::cout << "This is a " << j->getType() << " It's gonna make a sound now" << std::endl;
    j->makeSound();
    std::cout << "This is a " << i->getType() << " It's gonna make a sound now" << std::endl;
    i->makeSound();
    std::cout << "This is an " << meta->getType() << " It's gonna make a sound now" << std::endl;
    meta->makeSound();
    std::cout << "This is a " << wrongA->getType() << " It's gonna make a sound now" << std::endl;
    wrongA->makeSound();
    std::cout << std::endl;

    delete wrongA;
    delete meta;
    delete j;
    delete i;
    return 0;
}