/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2024/11/14 10:42:04 by droied           ###   ########.fr       */
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

std::ifstream	*BitcoinExchange::getInfile() const
{
	return (this->m_infile);
}

std::deque<std::string>	*BitcoinExchange::getDqIn() const
{
	return (this->m_dq_in);
}

void	BitcoinExchange::openReadfile(const char *t_name_file, std::ifstream &t_file)
{
	t_file.open(t_name_file);
	if (!t_file.is_open())
	{
		std::string merror = std::string("The file: ") + t_name_file + " it cannot be open";
		throw std::runtime_error(merror.c_str());
	}
}

void	BitcoinExchange::setupFiles( std::ifstream &t_infile, std::ifstream &t_databse )
{
	this->m_infile = &t_infile;
	this->m_database = &t_databse;
}

void BitcoinExchange::containData(std::deque<std::string> &dq, std::ifstream *t_file)
{
	std::string line;
	std::getline(*t_file, line); //lo cambie todo a ifstream pero creo que tambien puede funcionar con fstream
								 //hay que probarlo, ahora mismo da segfault seguramente por el tema de referencias
								 //y punteros.
								 //no creo que sea por el tipo. igual segun chati es mejor usar ifstream si solo voy a leer
								 //y pues tiene sentido en verdad.
	std::cout << line << "\n";
	dq.push_back(line);
	// while(getline(t_file, line))
	// {
	// std::cout << "aqui\n";
	// dq.push_back(line);
	// }
}

void	BitcoinExchange::printValue()
{
	for (std::deque<std::string>::iterator it(m_dq_in->begin()); it != m_dq_in->end(); it++)
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
