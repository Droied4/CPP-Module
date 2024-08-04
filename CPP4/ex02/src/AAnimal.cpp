/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:27:23 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:41:16 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->_type = "Animal"; 
	std::cout << "Animal Constructor Called" << std::endl;
}

AAnimal::AAnimal( const std::string type )
{
	this->_type = type;
	std::cout << type << " Constructor Called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &obj )
{
	*this = obj;
}

AAnimal	&AAnimal::operator=( const AAnimal &obj )
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

std::string AAnimal::getType( void ) const
{
	return (this->_type);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "*Animal Sound*" << std::endl;
}
