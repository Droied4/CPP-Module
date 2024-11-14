/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2024/11/14 10:39:31 by droied           ###   ########.fr       */
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
		std::ifstream 			*m_infile;
		std::ifstream 			*m_database;
		std::deque<std::string>	*m_dq_in;
		std::deque<std::string> m_dq_out;

	public:
		void	printValue();	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		std::ifstream			*getInfile() const;
		std::deque<std::string>	*getDqIn() const;

		void	openReadfile(const char *t_name_file, std::ifstream &t_file);
		void	setupFiles( std::ifstream &infile, std::ifstream &database);
		void	containData(std::deque<std::string> &dq, std::ifstream *t_file);
		void	checkInfile( void );
};

#endif //BITCOINEXCHANGE_HPP
