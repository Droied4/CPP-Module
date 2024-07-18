/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:40:48 by deordone          #+#    #+#             */
/*   Updated: 2024/07/18 23:31:30 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTORS */

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fixPointNum = 0;
}

Fixed::Fixed(const int N)
{
//	std::cout << "Int constructor called" << std::endl;
	this->_fixPointNum = N << this->_octet;
}

Fixed::Fixed(const float N)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fixPointNum = roundf(N * (1 << this->_octet));
}

Fixed::Fixed(const Fixed &obj)
{
//	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

/* OPERATORS */

Fixed &Fixed::operator=(const Fixed &obj)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_fixPointNum = obj.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	return (this->_fixPointNum > obj.getRawBits());
}

bool	Fixed::operator<(const Fixed &obj) const
{
	return (this->_fixPointNum < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed &obj) const 
{
	return (this->_fixPointNum >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed &obj) const 
{
	return (this->_fixPointNum <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed &obj) const 
{
	return (this->_fixPointNum == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed &obj) const 
{
	return (this->_fixPointNum != obj.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &obj) const 
{
	return (this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed &obj) const 
{
	return (this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed &obj) const 
{
	return (this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
	return (this->toFloat() / obj.toFloat());
}

Fixed	&Fixed::operator++( void )
{
	++this->_fixPointNum;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed temp = *this;
   ++*this;
   return (temp);
}

Fixed	&Fixed::operator--( void )
{
	--this->_fixPointNum;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed temp = *this;
   --*this;
   return (temp);
}

std::ostream &operator<<( std::ostream &out, Fixed const &obj)
{
	return (out << obj.toFloat());
}

/* METHODS */

int	Fixed::getRawBits( void ) const 
{
	return (this->_fixPointNum);
}

void Fixed::setRawBits( int const raw )
{
	this->_fixPointNum = raw;
}

float Fixed::toFloat( void ) const
{
	//also return static_cast<float>( this->_fixPointNum ) / ( 256 );
	return static_cast<float>( this->_fixPointNum ) / ( 1 << this->_octet );
}

int Fixed::toInt( void ) const
{
	return (this->_fixPointNum >> this->_octet);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? b : a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? b : a);
}

/* DESTRUCTOR */

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}
