/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:08:14 by droied            #+#    #+#             */
/*   Updated: 2024/07/18 19:48:56 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const Point &obj);
{
	this->_x = obj.getPointX();
	this->_y = obj.getPointY();
}

Point &Point::operator=(const Point &obj); 
{
	if (this != &obj)
	{
		this->_x = obj.getPointX();
		this->_y = obj.getPointY();
	}
	return (*this);
}

Point::~Point() {
}

Fixed Point::getPointX( void ) const
{
	return (this->_x);	
}

Fixed Point::getPointY( void ) const
{
	return (this->_y);	
}

Fixed Point::setPointX( Fixed x )
{
	this->_x = x;
}

Fixed Point::setPointY( Fixed y )
{
	this->_y = y;
}

bool	bsp( Point const a, Point const b, Point const c, Point const Point)
{
	Fixed w1(0);
	Fixed w2(0);
	Fixed d(0);
	Fixed e(0);

}
