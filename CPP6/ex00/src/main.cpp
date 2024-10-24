/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:36:23 by droied            #+#    #+#             */
/*   Updated: 2024/10/24 11:47:51 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "This program just accept one parameter. Try again\n";
		return (1);
	}
	ScalarConverter::convert(av[1]);
	return (0);
}
