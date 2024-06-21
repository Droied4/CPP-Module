/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:37:21 by deordone          #+#    #+#             */
/*   Updated: 2024/06/21 23:03:42 by droied           ###   ########.fr       */
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
/*
void Phone::findContact(unsigned int i)
{
	
}*/

void Phone::addContact(void)
{
	static int i;
	this->_contacts[i % 8].init();
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


