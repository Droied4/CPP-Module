/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:27:50 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 01:33:14 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
	this->_catBrain = new Brain;
	this->_type = Animal::getType();
}

Cat::Cat( const Cat &obj ) : Animal::Animal(obj)
{
	*this = obj;
}

Cat &Cat::operator=( const Cat &obj )
{
	if (this != &obj)
	{
		this->_type = obj.getType();
		this->_catBrain = obj.getBrain();
	}
	return(*this);
}

Cat::~Cat()
{
	delete this->_catBrain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat: Es triste pero cierto conocemos a las personas cuando por utlimas veces las vemos. Miau" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (this->_catBrain);
}
