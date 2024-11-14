/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2024/11/14 20:37:56 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <deque>

class BitcoinExchange 
{
	private:
		std::ifstream 			m_infile;
		std::ifstream 			m_database;
		std::deque<std::string>	m_dq_in;
		std::deque<std::string> m_dq_out;

	public:
		void	printValue();	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		void	openReadfile(const char *t_name_file);
		void	containData();
		void	checkInfile();
};

#endif //BITCOINEXCHANGE_HPP
