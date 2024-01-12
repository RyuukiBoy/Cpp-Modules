/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:42:30 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/17 21:35:27 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* beta = new Animal();
    const Animal* omega = new Dog();

    delete beta;
    delete omega;

    Dog dog;
    {
        Dog tmp = dog;
    }
    std::cout << std::endl;
    const Animal *animal[4] = {new Dog(), new Cat(), new Dog(), new Cat()};
    for (int i = 0; i < 4; i++)
    {
        delete animal[i];
    }
    return 0;
}