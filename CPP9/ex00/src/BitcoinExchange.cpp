/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2024/11/16 20:37:42 by droied           ###   ########.fr       */
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
	// std::getline(m_infile, line); 
	// std::cout << line << "\n";
	// m_dq_in.push_back(line);
	while(getline(m_infile, line))
		m_dq_in.push_back(line);

	// for (std::deque<std::string>::iterator it(m_dq_in.begin()); it != m_dq_in.end(); it++)
		// std::cout << *it << "\n";y
}

void	BitcoinExchange::printValue()
{
	for (std::deque<std::string>::iterator it(m_dq_in.begin()); it != m_dq_in.end(); it++)
		std::cout << *it << "\n";
}

bool BitcoinExchange::checkFile(std::deque<std::string> &dq_out, unsigned long i)
{
	//check format
	std::string line = m_dq_in[i];
	std::string::size_type pipe = line.find("|");
	if (pipe == std::string::npos)
	{
		dq_out.push_back("Error: invalid format missing '|'");
		return (true);
	}

	std::string date = line.substr(0, pipe - 1);
	std::string value = line.substr(pipe + 1, line.size());	
	//check date

	//end check date
	//check value

	//end check value
	//check if data exist
	std::deque<std::string>::iterator it = std::find(m_dq_in.begin(), m_dq_in.end(), date);	
	if (it == m_dq_in.end())
	{
		dq_out.push_back("conversion with the closest upper one");
		return (true);
	}
	//end if data
	//conversion
	dq_out.push_back("conversion");
	return (true);
}

void	BitcoinExchange::writeData(std::deque<std::string> &dq_out)
{
	bool fill = false;
	for (unsigned long i(1); i < m_dq_in.size(); i++)
	{
		fill = checkFile(dq_out, i);
		if (!fill)
			std::cout << "no se lleno\n";
			// conversion(dq_out, i);
	}
		for (std::deque<std::string>::iterator it(dq_out.begin()); it != dq_out.end(); it++)
			std::cout << *it << "\n";
}
