/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:59:29 by deordone          #+#    #+#             */
/*   Updated: 2024/07/27 03:41:53 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal"; 
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal( const std::string type )
{
	this->_type = type;
	std::cout << type << " Constructor Called" << std::endl;
}

Animal::Animal( const Animal &obj )
{
	*this = obj;
}

Animal	&Animal::operator=( const Animal &obj )
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType( void ) const
{
	return (this->_type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "*Animal Sound*" << std::endl;
}
