/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2024/12/28 22:39:59 by droied           ###   ########.fr       */
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
	std::string line_db;
	while(getline(m_infile, line))
		m_dq_in.push_back(line);
	while(getline(m_database, line_db))
		m_dq_database.push_back(line_db);
}

void	BitcoinExchange::printValue()
{
	for (std::deque<std::string>::iterator it(m_dq_in.begin()); it != m_dq_in.end(); it++)
		std::cout << *it << "\n";
}

bool checkDate(std::string date)
{
	int year(0);
	int month(0);
	int day(0);

	std::string::size_type line = date.find("-");
	std::istringstream(date.substr(0, line)) >> year;

	if (!(year >= 0 && year <= 4242))
		return (true);
	
	date.erase(0, line + 1);
	line = date.find("-");
	std::istringstream(date.substr(0, line)) >> month;

	if (!(month >= 0 && month <= 12))
		return (true);
	
	date.erase(0, line + 1);
	std::istringstream(date) >> day;
	
	if (!(day >= 1 && day <= 31))
		return (true);
	return (false);
}

bool checkValue(std::string value)
{
	int number(0);
	std::istringstream(value) >> number;
	if (number < 0)
		return (true);
	if (number >= INT_MAX)
		return (true);
	return (false);
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
	if (checkDate(date))
	{
		dq_out.push_back("Error: Invalid date " + date);
		return (true);
	}
	//check value
	if (checkValue(value))
	{
		dq_out.push_back("Error: Invalid value " + value);
		return (true);
	}
	return (false);
}

void BitcoinExchange::conversion(std::deque<std::string> &dq_out, unsigned long i)
{
	std::string line = m_dq_in[i];
	std::string::size_type pipe = line.find("|");
	std::string date = line.substr(0, pipe - 1);
	std::string value = line.substr(pipe + 1, line.size());

	std::deque<std::string> data;
	std::string data_line;
	for(std::deque<std::string>::iterator it(m_dq_database.begin()); it != m_dq_database.end(); it++)
	{
		std::string::size_type comma = it->find(","); 
		data_line = it->substr(0, comma - 1);
		data.push_back(data_line);
	}
	std::deque<std::string>::iterator db_line = find(m_dq_database.begin(), m_dq_database.end(), date);
	if (db_line == m_dq_database.end())
	{
		dq_out.push_back("buscar el valor mas pequeño");
		return ;
	}
	std::string::size_type comma = db_line->find(",");
	std::string db_date = db_line->substr(0, comma - 1);
	std::string db_value = db_line->substr(comma + 1, db_line->size());	

	double db_number(0.0);
	double number(0.0);
	std::istringstream(db_value) >> db_number;
	std::istringstream(value) >> number;
	// std::cout << "db value " << db_value << "\n";
	// std::cout << "value " << value << "\n";
	// std::cout << "db date " << db_value << "\n";
	std::ostringstream result;
	double r = db_number * number;
	result << r;
	dq_out.push_back(result.str());
}

void	BitcoinExchange::writeData(std::deque<std::string> &dq_out)
{
	bool fill = false;
	for (unsigned long i(1); i < m_dq_in.size(); i++)
	{
		fill = checkFile(dq_out, i);
		if (!fill)
			conversion(dq_out, i);
	}
	for (std::deque<std::string>::iterator it(dq_out.begin()); it != dq_out.end(); it++)
		std::cout << *it << "\n";
}
