/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2024/11/16 20:19:23 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <algorithm>
# include <iostream>
# include <fstream>
# include <deque>

class BitcoinExchange 
{
	private:
		std::ifstream 			m_infile;
		std::ifstream 			m_database;
		std::deque<std::string>	m_dq_in;

	public:
		void	printValue();	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		void	openReadfile(const char *t_name_file);
		bool	checkFile(std::deque<std::string> &dq_out, unsigned long i);
		void	containData();
		void	writeData(std::deque<std::string> &dq_out);
};

#endif //BITCOINEXCHANGE_HPP
