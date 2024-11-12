/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2024/11/12 11:37:49 by deordone         ###   ########.fr       */
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

void	BitcoinExchange::openFile(const char *t_name_file, std::fstream &t_file, std::ios_base::openmode t_mode)
{
	t_file.open(t_name_file, t_mode);
	if (!t_file.is_open())
	{
		std::string merror = std::string("The file: ") + t_name_file + " it cannot be open";
		throw std::runtime_error(merror.c_str());
	}
}

void	BitcoinExchange::setupFiles( std::fstream &t_infile, std::fstream &t_databse )
{
	this->m_infile = &t_infile;
	this->m_database = &t_databse;
}


//create this functions
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
		return (1);
	}
	return (0);	
}
