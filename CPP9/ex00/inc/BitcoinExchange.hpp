/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:15:15 by deordone          #+#    #+#             */
/*   Updated: 2024/11/12 11:37:17 by deordone         ###   ########.fr       */
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
		std::deque<std::string>	m_output;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &t_obj);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &t_obj);

		void	openFile(const char *t_name_file, std::fstream &t_file, std::ios_base::openmode t_mode);
		void	setupFiles( std::fstream &infile, std::fstream &database);
		void	checkInfile( void );
};

#endif //BITCOINEXCHANGE_HPP
