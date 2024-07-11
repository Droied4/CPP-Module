/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:31:03 by droied            #+#    #+#             */
/*   Updated: 2024/07/12 00:41:05 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ( void )
{
	std::string message = "HI THIS IS BRAIN";
	std::string *stringPTR = &message;
	std::string &stringREF = message;
	
	std::cout << "The memory address of the string variable: " << &message << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable: " << message << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
