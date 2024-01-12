/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:13:44 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/17 22:11:33 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

int main( void )
{ 
	const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete j;
    delete i;

    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

	for ( int i = 0;i < 4; i++ ) {
		animals[i]->makeSound();
	}

    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}