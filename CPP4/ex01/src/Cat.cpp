/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:27:50 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:24:43 by deordone         ###   ########.fr       */
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
	this->_type = obj.getType();
	this->_catBrain = new Brain(*(obj.getBrain()));
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=( const Cat &obj )
{
	this->_type = obj.getType();
        if (this->_catBrain)
                delete(this->_catBrain);
        this->_catBrain = new Brain(*(obj.getBrain()));
        return (*this);
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

void    Cat::compareWith(Cat const &other)
{
        std::cout << "Cat compare" << std::endl;
        std::cout << "My brain's heap address: " << static_cast<void*>(this->_catBrain) << std::endl;
        std::cout << "Other's heap address: " << static_cast<void*>(other.getBrain()) << std::endl;
        std::cout << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (this->_catBrain);
}
