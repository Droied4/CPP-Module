/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:18:01 by droied            #+#    #+#             */
/*   Updated: 2024/11/12 11:36:51 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int parse(char *av[], BitcoinExchange &obj)
{
	std::fstream infile;
	std::fstream database;
	try
	{
		obj.openFile(av[1], infile, std::ios_base::in);
		obj.openFile("src/data.csv", database, std::ios_base::in);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << "\n";
		return(1);
	}
	obj.setupFiles(infile, database);
	return (0);
}

int main (int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Usage: insert one file\n";
		return (1);
	}
	BitcoinExchange exchange;
	if (parse(av, exchange))
		return (1);
	if (exchange.checkInfile())
		return (1);
	return (0);
}
