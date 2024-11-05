/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:14:34 by deordone          #+#    #+#             */
/*   Updated: 2024/11/05 11:40:55 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span vec(5);
	{
		std::cout << "\n[OUTBOUNDS TEST]\n";
		try 
		{
			vec.addNumber(6);
			vec.addNumber(3);
			vec.addNumber(17);
			vec.addNumber(9);
			vec.addNumber(11);
			vec.addNumber(4000);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	{
		std::cout << "\n[LONGEST TEST]\n";
		Span vec2(1);
		try 
		{
			vec2.addNumber(1);
			std::cout << "longest2 -> " << vec2.longestSpan() << "\n";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
		std::cout << "longest -> " << vec.longestSpan() << "\n";
	}	
	{
		std::cout << "\n[SHORTEST TEST]\n";
		Span vec2(1);
		try 
		{
			vec2.addNumber(1);
			std::cout << "longest2 -> " << vec2.shortestSpan() << "\n";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
		std::cout << "shortest -> " << vec.shortestSpan() << "\n";
	}
	{
		std::cout << "\n[MANY NUMBERS TEST]\n";
		Span vec2(5);

		vec2.addManyNumbers();
		std::cout << "longest -> " << vec2.longestSpan() << "\n";
		std::cout << "shortest -> " << vec2.shortestSpan() << "\n";
	}

	return (0);
}
