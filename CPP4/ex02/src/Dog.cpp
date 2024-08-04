/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:17:49 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:41:46 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal::AAnimal("Dog")
{
	this->_dogBrain = new Brain;
	this->_type = AAnimal::getType();
}

Dog::Dog(const Dog &obj) : AAnimal::AAnimal(obj)
{
	this->_type = obj.getType();
	this->_dogBrain = new Brain(*(obj.getBrain()));
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->_type = obj.getType();
	if (this->_dogBrain)
		delete(this->_dogBrain);
	this->_dogBrain = new Brain(*(obj.getBrain()));
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

void	Dog::compareWith(Dog const &other)
{
	std::cout << "Dog compare" << std::endl;
	std::cout << "My brain's heap address: " << static_cast<void*>(this->_dogBrain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other.getBrain()) << std::endl;
	std::cout << std::endl;
}

Brain *Dog::getBrain( void  ) const
{
	return (this->_dogBrain);
}
