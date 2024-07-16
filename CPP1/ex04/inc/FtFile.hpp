/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtFile.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:34:58 by droied            #+#    #+#             */
/*   Updated: 2024/07/17 00:26:33 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTFILE_HPP
#define FTFILE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class FtFile
{
	private:
		std::ifstream	_file;
		std::ofstream	_newFile;
		std::string		_filename;
		std::string		_search;
		std::string		_replace;
	public:
		FtFile();
		~FtFile();
		
		std::string		getFilename( void );
		std::string		getSearch( void );
		std::string		getReplace( void );
		int				openReadfile( void );
		int				openWritefile( std::string newFile );
		bool			validWord(std::string content, size_t pos);
		int				closeFiles( void );
		std::string		occurrence( void );
		void			transcribe( std::string line );
		void			replaceWord( unsigned int pos );
};

#endif /* FTFILE_HPP */
