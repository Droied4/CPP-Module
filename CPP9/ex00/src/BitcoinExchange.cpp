/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2024/11/12 09:13:30 by droied           ###   ########.fr       */
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

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &t_obj)
{
	if (this != &t_obj)
	{
		
	}
	return (*this);
}

void	BitcoinExchange::openFile(const char *t_name_file, std::fstream &t_file, std::ios_base::openmode t_mode)
{
	t_file.open(t_name_file, t_mode);
	if (!t_file.is_open())
		throw std::runtime_error("The file it cannot be open");
}

//vale tengo que hacer un contenedor que almacene nombres de archivos
void BitcoinExchange::setupFiles( void )
{
	openFile("exacto", m_infile, std::ios_base::in);
	openFile("database.csv", m_database, std::ios_base::in);
}
