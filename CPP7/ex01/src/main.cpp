/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:48:25 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 22:28:41 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T> void iter(T *address, unsigned int lenght, void(*f)(T &var))
{
	for (unsigned int i(0); i < lenght; i++)
		f(address[i]);
}

template <typename T> void print(T &a)
{
	std::cout << a << "\n";
}

int main( void ) 
{
	int num[] = {4, 2};
	char abc[] = {'a', 'b', 'c'};
	std::string jackson5[] = 
	{
		"A B C, It's easy as", 
		"1 2 3, as simple as", 
		"do re mi, A B C, 1 2 3",
		"baby you and me girl"
	};
	iter(num, 2, print<int>);
	iter(abc, 3, print<char>);
	iter(jackson5, 4, print<std::string>);
	return (0);
}
