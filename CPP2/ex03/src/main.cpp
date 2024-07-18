/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/07/18 23:49:57 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main ( void )
{
	Point a(0, 0);
	Point b(6, 0);
	Point c(3, 6);
	Point in(3, 4);
	Point out(0, 1);
	
	if (bsp(a, b, c, in))
		std::cout << "Is inside" << std::endl;
	if (!bsp(a, b, c, out))
		std::cout << "Is outside" << std::endl;
	return (0);
}
