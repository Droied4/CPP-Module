/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:47:57 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main ( void )
{
	std::string red = "\033[1;31m";
	std::string na = "\033[0m";
	std::cout << red << "Test 01\n" << na << std::endl;
	
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	dog->makeSound();
	cat->makeSound();
	delete dog;
	delete cat;

	std::cout << red << "Test 02\n" << na <<  std::endl;

	Dog dog1;
	Cat cat1;

	Dog &dogRef = dog1;
	Cat &catRef = cat1;

	Dog dogCpy(dogRef);
	Cat catCpy(catRef);

	Dog &dogCpyRef = dogCpy;
	Cat &catCpyRef = catCpy;

	dog1.compareWith(dogCpyRef);
	cat1.compareWith(catCpyRef);
	
	std::cout << red << "Test 03\n" << na <<  std::endl;
	
//	AAnimal ani;
	Dog	doggy;
	Cat	catty;

	std::cout << red << "Destructors\n" << na << std::endl;
	return (0);
}
