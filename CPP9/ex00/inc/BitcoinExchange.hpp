/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2025/01/20 12:17:38 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <algorithm>
# include <iostream>
# include <limits.h>
# include <fstream>
# include <sstream>
# include <deque>

class BitcoinExchange 
{
	private:
		std::ifstream 			m_infile;
		std::ifstream 			m_database;
		std::deque<std::string>	m_dq_in;
		std::deque<std::string>	m_dq_database;
	public:
		void	printValue();	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		void	openReadfile(const char *t_name_file);
		bool	checkFile(std::deque<std::string> &dq_out, unsigned long i);
		void	containData();
		void	conversion(std::deque<std::string> &dq_out, unsigned long i);
		void	writeData(std::deque<std::string> &dq_out);

		std::deque<std::string> getDqIn() const;
		std::deque<std::string> getDqDatabase() const;
};

#endif //BITCOINEXCHANGE_HPP
