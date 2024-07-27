/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:17:49 by deordone          #+#    #+#             */
/*   Updated: 2024/07/27 03:42:42 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	this->_type = Animal::getType();
}

Dog::Dog(const Dog &obj) : Animal::Animal(obj)
{
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog: La filosofia es un silencioso dialogo del alma consigo misma en torno al ser. Digo... Guau Guau" << std::endl;
}
