/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:36:19 by deordone          #+#    #+#             */
/*   Updated: 2024/08/02 13:41:08 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
	this->_type = "Wrong Animal"; 
	std::cout << "Wrong Animal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &obj )
{
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &obj )
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "*Wrong Animal Sound*" << std::endl;
}

/* Wrong Cat */

WrongCat::WrongCat() : WrongAnimal() 
{
	this->_type = "Wrong Cat";
	std::cout << "Wrong Cat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj ) : WrongAnimal()
{
	*this = obj;
}

WrongCat &WrongCat::operator=( const WrongCat &obj )
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructor Called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "*Wrong cat Sound*" << std::endl;
}
