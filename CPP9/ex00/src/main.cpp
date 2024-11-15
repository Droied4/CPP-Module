/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:18:01 by droied            #+#    #+#             */
/*   Updated: 2024/11/15 08:44:33 by droied           ###   ########.fr       */
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
	std::deque<std::string> dq_out;
	obj.containData();
	// obj.printValue();
	obj.writeData(dq_out);
	//1. Dei del futuro tienes que hacer una funcion para escribir en un contenedor local
	//lo que vas a imprimir al final
	//1.1 Dentro de esta funcion se debe hacer una llamada a tres funciones de checkeo
	//		- Check Date (si la fecha esta mal poner en el contenedor un mensaje de error)
	//		- Check Format (si el formato esta mal --- )
	//		- Check Value (si el numero es invalido ---)
	//1.2 Si todo esta bien entonces poner en el contenedor el output esperado.
	//2. Funcion que imprime el contenido de un contenedor
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
	// exchange.printExchange(); no creada aun
	return (0);
}
