/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:37:21 by deordone          #+#    #+#             */
/*   Updated: 2024/06/24 11:12:05 by deordone         ###   ########.fr       */
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

static void printIndex(void)
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
	std::cout << " |\n\n";
}

static void printHeader(void)
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

void Phone::printContent(void)
{
	std::string info("");
	int j(-1);
	int i(-1);

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
						info = ' ' + info;
			}
			std::cout << info;
			i++;
		}
		std::cout << " |\n";
	}
}

void Phone::findContact(void)
{
	unsigned int index(0);
	unsigned int i(0);

	printHeader();
	printIndex();
	printContent();
	std::cout << "\nInsert the index of the Contact\n" << std::endl;
	std::cout << "Press \"0\" to \e[31mcancel\e[0m" << std::endl;
	while (std::cin >> index)
	{
		std::cout << std::endl;
		i = index - 1;
		if ((index >= 1 && index <= 8) && this->_contacts[i].infoExist())	
		{
				std::cout << "First Name : " << this->_contacts[i].getContactInfo(0) << std::endl;
				std::cout << "Last Name : " << this->_contacts[i].getContactInfo(1) << std::endl;
				std::cout << "Nickname : " << this->_contacts[i].getContactInfo(2) << std::endl;
				std::cout << "Phone Number : " << this->_contacts[i].getContactInfo(3) << std::endl;
				std::cout << "Darkest Secret : " << this->_contacts[i].getContactInfo(4) << std::endl;
				std::cout << "\nInsert the index of the Contact\n" << std::endl;
		}
		else if (index == 0)
			break ;
		else
			std::cout << "Contact Out of range\n" << std::endl;	
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
	std::cout << "•----------------------------•" << std::endl;
}


