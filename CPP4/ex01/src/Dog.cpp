/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:17:49 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 01:30:40 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	this->_dogBrain = new Brain;
	this->_type = Animal::getType();
}

Dog::Dog(const Dog &obj) : Animal::Animal(obj)
{
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->_type = obj.getType();
		this->_dogBrain = obj.getBrain();
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_dogBrain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog: La filosofia es un silencioso dialogo del alma consigo misma en torno al ser. Digo... Guau Guau" << std::endl;
}

Brain *Dog::getBrain( void  ) const
{
	return (this->_dogBrain);
}
