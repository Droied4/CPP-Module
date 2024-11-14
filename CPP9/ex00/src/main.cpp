/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:18:01 by droied            #+#    #+#             */
/*   Updated: 2024/11/14 10:38:13 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int parse(char *av[], BitcoinExchange &obj)
{
	std::ifstream infile;
	std::ifstream database;
	try
	{
		obj.openReadfile(av[1], infile);
		obj.openReadfile("src/data.csv", database);
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
	exchange.containData(*exchange.getDqIn(), exchange.getInfile());
	exchange.printValue();
	// if (exchange.checkInfile())
		// return (1);
	return (0);
}
