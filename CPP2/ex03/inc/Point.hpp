/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:00:40 by droied            #+#    #+#             */
/*   Updated: 2024/07/18 19:48:52 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point 
{
	private :
		const Fixed	_x;
		const Fixed _y;
	public :
		Point();
		Point(const Point &obj);
		Point &operator=(const Point &obj); 
		~Point();
	
		Point(const Fixed &a, const Fixed &b);
		
		Fixed	getPointX( void ) const ;
		Fixed	getPointY( void ) const ;
		void	setPointX( Fixed x );
		void	setPointY( Fixed y );
		
		bool	bsp( Point const a, Point const b, Point const c, Point const Point);	
}

#endif /* POINT_HPP */
