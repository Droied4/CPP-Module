/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:40:48 by deordone          #+#    #+#             */
/*   Updated: 2024/07/18 17:18:36 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixPointNum = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy Constructor called" << std::endl;
	//this->setRawBits(obj.getRawBits());
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_fixPointNum = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixPointNum);
}

void	Fixed::setRawBits(int const raw )
{
	this->_fixPointNum = raw;
}
