/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/08/02 13:43:28 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main ( void )
{
	Animal 				Lizard("Lizard");
	Dog					Jake;
	Cat					Felix;
	const WrongAnimal* 	EvilFelix = new WrongCat;

	std::cout << "[MY TEST]" << std::endl;
	Lizard.makeSound();
	Jake.makeSound();
	Felix.makeSound();
	EvilFelix->makeSound();
	
	std::cout << "\n\n" << std::endl ;
	std::cout << "[SUBJECT TEST]" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return (0);
}
