/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2025/02/11 22:20:28 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <fstream>
# include <sstream>
# include <map>

class BitcoinExchange 
{
	private:
		std::ifstream 			m_infile;
		std::ifstream 			m_database;
		std::map<int, std::string>	m_dq_in;
		std::map<int, std::string>	m_dq_database;
	public:
		void	printValue();	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		void	openReadfile(const char *t_name_file);
		bool	checkFile(std::map<int, std::string> &dq_out, unsigned long i);
		void	containData();
		void	conversion(std::map<int, std::string> &dq_out, unsigned long i);
		void	writeData(std::map<int, std::string> &dq_out);

		std::map<int, std::string> getDqIn() const;
		std::map<int, std::string> getDqDatabase() const;
};

#endif //BITCOINEXCHANGE_HPP
