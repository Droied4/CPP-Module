/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:08:14 by droied            #+#    #+#             */
/*   Updated: 2024/07/18 23:48:20 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
}

Point::Point(const float x, const float y) : _x(x), _y(y) {
}

Point &Point::operator=(const Point &obj) 
{
	if (this != &obj)
	{
		(Fixed) this->_x = obj.getPointX();
		(Fixed) this->_y = obj.getPointY();
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

void Point::setPointX( Fixed x )
{
	(Fixed) this->_x = x;
}

void Point::setPointY( Fixed y )
{
	(Fixed) this->_y = y;
}

bool	bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed w1(0.0f);
	Fixed w12(0.0f);
	Fixed w2(0.0f);
	Fixed w22(0.0f);

	w1 = (a.getPointX() * (c.getPointY() - a.getPointY())) + ((p.getPointY() - a.getPointY()) * (c.getPointX() - a.getPointX())) - (p.getPointX() * (c.getPointY() - a.getPointY()));
	w12 = ((b.getPointY() - a.getPointY()) * (c.getPointX() - a.getPointX())) - ((b.getPointX() - a.getPointX()) * (c.getPointY() - a.getPointY()));
	w1 = w1 / w12;
	w2 = p.getPointY() - a.getPointY() - (w1 * (b.getPointY() - a.getPointY()));
	w22 = c.getPointY() - a.getPointY();
	w2 = w2 / w22;
	
	if (w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1)
		return (true);
	return (false);
}
