/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2024/11/14 20:38:05 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &t_obj)
{
	*this = t_obj;
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &t_obj) //FALTA HACER ESTO!!!!!
{
	if (this != &t_obj)
	{
		
	}
	return (*this);
}

void	BitcoinExchange::openReadfile(const char *t_name_file)
{
	m_infile.open(t_name_file);
	m_database.open("src/data.csv");
	if (!m_infile.is_open())
	{
		std::string merror = std::string("The file: ") + t_name_file + " it cannot be open";
		throw std::runtime_error(merror.c_str());
	}
	if (!m_database.is_open())
		throw std::runtime_error("Database on path 'src/data.csv' not found");
}

void BitcoinExchange::containData()
{
	std::string line;
	std::getline(m_infile, line); //lo cambie todo a ifstream pero creo que tambien puede funcionar con fstream
								 //hay que probarlo, ahora mismo da segfault seguramente por el tema de referencias
								 //y punteros.
								 //no creo que sea por el tipo. igual segun chati es mejor usar ifstream si solo voy a leer
								 //y pues tiene sentido en verdad
	std::cout << line << "\n";
	m_dq_in.push_back(line);
	// while(getline(t_file, line))
	// {
	// std::cout << "aqui\n";
	// dq.push_back(line);
	// }
}

void	BitcoinExchange::printValue()
{
	for (std::deque<std::string>::iterator it(m_dq_in.begin()); it != m_dq_in.end(); it++)
		std::cout << *it << "\n";
}

void	BitcoinExchange::checkInfile()
{
	try 
	{
		// checkDate();
		// checkFormat();
		// checkValue();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}
}
