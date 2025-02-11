/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:25:22 by droied            #+#    #+#             */
/*   Updated: 2025/02/11 22:34:40 by droied           ###   ########.fr       */
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
		this->m_dq_in = t_obj.getDqIn();
		this->m_dq_database = t_obj.getDqDatabase();
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
	int i(0);
	while(getline(m_infile, line))
		m_dq_in.insert(std::make_pair(i++, line));
	int it(0);
	while(getline(m_database, line_db))
		m_dq_database.insert(std::make_pair(it++, line_db));
}

void	BitcoinExchange::printValue()
{
	for (std::map<int, std::string>::iterator it(m_dq_in.begin()); it != m_dq_in.end(); it++)
		std::cout << it->second << "\n";
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
	if (number > 1000)
		return (true);
	return (false);
}

bool BitcoinExchange::checkFile(std::map<int, std::string> &dq_out, unsigned long i)
{
	//check format
	std::string line = m_dq_in[i];
	std::string::size_type pipe = line.find("|");
	if (pipe == std::string::npos)
	{
		dq_out.insert(std::make_pair(i, "Error: invalid format missing '|'"));
		return (true);
	}
	std::string date = line.substr(0, pipe - 1);
	std::string value = line.substr(pipe + 1, line.size());	
	//check date
	if (checkDate(date))
	{
		dq_out.insert(std::make_pair(i, "Error: Invalid date " + date));
		return (true);
	}
	//check value
	if (checkValue(value))
	{
		dq_out.insert(std::make_pair(i, "Error: Invalid value " + value));
		return (true);
	}
	return (false);
}

void trimDate(std::string date, int &year, int &month, int &day)
{
	std::string::size_type line = date.find("-");
	std::istringstream(date.substr(0, line)) >> year;

	date.erase(0, line + 1);
	line = date.find("-");
	std::istringstream(date.substr(0, line)) >> month;

	date.erase(0, line + 1);
	std::istringstream(date) >> day;
}

bool compareDates(int year, int month, int day, std::string date_match)
{
	int year_match(0);
	int month_match(0);
	int day_match(0);

	trimDate(date_match, year_match, month_match, day_match);
	if (year_match >= year)
	{
		if (month_match >= month)
			return (day_match <= day);
	}
	return (true);
}

void BitcoinExchange::conversion(std::map<int, std::string> &dq_out, unsigned long i)
{
	(void)dq_out;	
	//get the date target
	std::string dq_in = m_dq_in[i];
	std::string::size_type pipe = dq_in.find("|");
	std::string date_target = dq_in.substr(0, pipe - 1);
	//trim date
	int year_target(0);
	int month_target(0);
	int day_target(0);

	trimDate(date_target, year_target, month_target, day_target);
	
	std::map<int, std::string>::iterator it(m_dq_database.begin());
	while (it != m_dq_database.end())
	{
		std::string db_line = it->second;
		std::string::size_type coma = db_line.find(",");
		std::string db_date = db_line.substr(0, coma);
		if (!compareDates(year_target, month_target, day_target, db_date))
			break ;
		it++;
	}
	it--;
	
	std::string value_target = dq_in.substr(pipe + 1, dq_in.size());
	
	double num_target(0.0);
	std::istringstream iss(value_target);
	iss >> num_target;

	std::string db_line = it->second;
	std::string::size_type coma = db_line.find(",");
	std::string value_match = db_line.substr(coma + 1, db_line.size());
	
	double num_match(0.0);
	std::istringstream is(value_match);
	is >> num_match;

	double conversion = num_target * num_match;
	std::ostringstream oss;

	oss << conversion;
	std::string conver = oss.str();
	
	std::string last = date_target + " =>" + value_target + " = " + conver;
	dq_out.insert(std::make_pair(i, last));
}

void	BitcoinExchange::writeData(std::map<int, std::string> &dq_out)
{
	bool fill = false;
	for (unsigned long i(1); i < m_dq_in.size(); i++)
	{
		fill = checkFile(dq_out, i);
		if (!fill)
			conversion(dq_out, i);
	}
	for (std::map<int, std::string>::iterator it(dq_out.begin()); it != dq_out.end(); it++)
		std::cout << it->second << "\n";
}

std::map<int, std::string> BitcoinExchange::getDqIn() const
{
	return (this->m_dq_in);
}

std::map<int, std::string> BitcoinExchange::getDqDatabase() const
{
	return (this->m_dq_database);
}
