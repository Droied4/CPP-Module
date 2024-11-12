/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2024/11/12 20:26:21 by droied           ###   ########.fr       */
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
		std::fstream 			*m_infile;
		std::fstream 			*m_database;
		std::deque<std::string>	m_dq_in;
		std::deque<std::string> m_dq_out;

	public:
		void	printValue();	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		std::fstream			*getInfile() const;
		const std::deque<std::string>	&getDqIn() const;

		void	openFile(const char *t_name_file, std::fstream &t_file, std::ios_base::openmode t_mode);
		void	setupFiles( std::fstream &infile, std::fstream &database);
		void	containData(std::deque<std::string> &dq, std::fstream t_file);
		void	checkInfile( void );
};

#endif //BITCOINEXCHANGE_HPP
