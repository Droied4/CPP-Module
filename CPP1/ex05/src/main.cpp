/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 01:10:14 by droied            #+#    #+#             */
/*   Updated: 2024/07/17 01:35:05 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ( void )
{
	std::string input("default");
	Harl 		harl;

	while (input.compare("exit"))
	{
		std::cout << "Enter a level" << std::endl;
		std::cin >> input;
		harl.complain(input);
	}
	return (0);
}
