/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:26:07 by droied            #+#    #+#             */
/*   Updated: 2024/07/15 01:46:27 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	openFile( std::string filename )
{
	ofstream file(filename, ios::app);
	if (!file)
	{
		std::cout << "Invalida file" << std::endl;
		exit(EXIT_FAILURE);
	}
}

int main ( void )
{
	std::string filename;
	std::string search;
	std::string replace;

	std::cout << "Insert a valid filename" << std::endl;
	getline(std::cin, filename);
	std::cout << "Search" << std::endl;
	getline(std::cin, search);
	std::cout << "Replace" << std::endl;
	getline(std::cin, replace);
	openFile(filename);
	return (0);
}
