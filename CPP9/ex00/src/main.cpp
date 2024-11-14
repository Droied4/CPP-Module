/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:18:01 by droied            #+#    #+#             */
/*   Updated: 2024/11/14 22:01:37 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int openFiles(char *av[], BitcoinExchange &obj)
{
	try
	{
		obj.openReadfile(av[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << "\n";
		return(1);
	}
	return (0);
}

int saveData(BitcoinExchange &obj)
{
	obj.containData();
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
	if (openFiles(av, exchange))
		return (1);
	if (saveData(exchange))
			return (1);
	exchange.printValue();
	// exchange.printExchange(); no creada aun
	return (0);
}
