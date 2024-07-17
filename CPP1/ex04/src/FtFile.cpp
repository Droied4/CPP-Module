/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtFile.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:34:00 by droied            #+#    #+#             */
/*   Updated: 2024/07/17 16:30:31 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtFile.hpp"

FtFile::FtFile()
{
	std::string filename;
	std::string search;
	std::string replace;

	std::cout << "Insert a valid filename" << std::endl;
	getline(std::cin, filename);
	std::cout << "Search" << std::endl;
	getline(std::cin, search);
	std::cout << "Replace" << std::endl;
	getline(std::cin, replace);

	this->_filename = filename;
	this->_search = search;
	this->_replace = replace;
}

FtFile::~FtFile(){
}

std::string FtFile::getFilename( void )
{
	return (this->_filename);
}

std::string FtFile::getSearch( void )
{
	return (this->_search);
}

std::string FtFile::getReplace( void )
{
	return (this->_replace);
}

std::string FtFile::occurrence( void )
{
	size_t pos(0);
	std::string line;
	std::string content;
	std::string definitive;
	while (getline(this->_file, line))
	{
		content.append(line);
		content.append("\n");
	}
	while (42)
	{
		pos = content.find(getSearch());
		if (pos == std::string::npos)
			break ;
		definitive += content.substr(0, pos);
		definitive += getReplace();
		content.erase(0, pos + getSearch().size());
	}
	definitive += content;
	return(definitive);
}

void	FtFile::transcribe( std::string line )
{
	this->_newFile << line;
}

int FtFile::openReadfile( void )
{
	this->_file.open(&getFilename()[0], std::ios::in);
	if (!this->_file.is_open())
	{
		std::cerr << "Invalid File" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int FtFile::openWritefile( std::string newFile )
{
	this->_newFile.open(&newFile[0], std::ios::out | std::ios::trunc);
	if (!this->_file.is_open())
	{
		std::cerr << "Invalid File" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int FtFile::closeFiles( void )
{
	this->_file.close();
	this->_newFile.close();
	if (this->_file.is_open() || this->_newFile.is_open())
		return(EXIT_FAILURE);
	return(EXIT_SUCCESS);
}
