/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:37:21 by deordone          #+#    #+#             */
/*   Updated: 2024/06/24 09:41:13 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phone.hpp"

Phone::Phone(void)
{
}

Phone::~Phone(void)
{
}

static void print_index(void)
{
	std::vector<std::string> header;
	header.push_back("  Index ");
    header.push_back(" First Name");
    header.push_back(" Last Name ");
    header.push_back(" Nick name ");
	for (size_t i = 0; i < header.size(); i++) 
	{
		std::cout << " |";
		std::cout << header[i];
	}
	std::cout << " |\n";
}

static void print_header(void)
{
	std::cout << " ";
	for (size_t j = 0; j < 48; j++)
		std::cout << "-";
	std::cout << "\n|";
	for (size_t j = 0; j < 20; j++)
		std::cout << " ";
	std::cout << "DIRECTORY";
	for (size_t j = 0; j < 19; j++)
		std::cout << " ";
	std::cout << "|\n ";
	for (size_t j = 0; j < 48; j++)
		std::cout << "-";
	std::cout << "\n";
}

void Phone::findContact(void)
{
	std::string info("");
	int j(-1);
	int i(-1);

	print_header();
	print_index();
	while (this->_contacts[++j].infoExist() && j < 8)
	{
		i = 0;
		std::cout << " | ";
		std::cout << "   " <<  this->_contacts[j].getIndex() << "   ";
		while (i < 3)
		{
			std::cout << " | ";
			info = this->_contacts[j].getContactInfo(i);
			if (info.size() >= 10)
			{
				info[9] = '.';
				info.erase(10, info.size());
			}
			else 
			{
				while (info.size() < 10)
					info.append(" ");	
			}
			std::cout << info;
			i++;
		}
		std::cout << " |\n";
	}
}

void Phone::addContact(void)
{
	static int i(0);
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
	}

void Phone::welcome(void) const 
{
	std::cout << std::endl;
	std::cout << "Welcome to your Phone Book ☎️  " << std::endl;
	std::cout << std::endl;
	std::cout << "•---------• USAGE •---------•" << std::endl;
	std::cout << "1. ADD : To add a contact." << std::endl;
	std::cout << "2. SEARCH : To search for a contact." << std::endl;
	std::cout << "3. EXIT : to quite the PhoneBook." << std::endl;
	std::cout << "•----------------------------•";
	std::cout << std::endl;
}


