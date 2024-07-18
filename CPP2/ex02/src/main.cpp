/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/07/18 18:56:03 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "default constructor: " << a << std::endl;
	std::cout << "prefix sum: " << ++a << std::endl;
	std::cout << "prefix subs: " << --a << std::endl;
	std::cout << "postfix sum: " << a++ << std::endl;
	std::cout << "postfix sum: " << a-- << std::endl;
	
	a = 2;

	std::cout << "Copy Constructor : " << a << std::endl;
	std::cout << "mul: " << a * a << std::endl;
	std::cout << "sum: " << a + a << std::endl;
	std::cout << "subs: " << a - a << std::endl;
	std::cout << "div: " << a / a << std::endl;

	if (a < b)
		std::cout << a << " is less than " << b << std::endl;
	else
		std::cout << a << " is greater than " << b << std::endl;
	
	std::cout << "Max num between " << a << " and " << b << " is "<< Fixed::max( a, b ) << std::endl;
	std::cout << "Min num between " << a << " and " << b << " is "<< Fixed::min( a, b ) << std::endl;
	
	Fixed bomb(0);
	std::cout << bomb / bomb << std::endl;
	return (0);
}
