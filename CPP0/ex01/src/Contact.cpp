/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:39:27 by deordone          #+#    #+#             */
/*   Updated: 2024/06/22 21:42:36 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Contact.hpp"

Contact::Contact(void)
{
        return ;
}

Contact::~Contact(void)
{
        return ;
}

bool Contact::infoExist(void)
{
	if (this->_firstName.empty())
		return (false);
	else
		return (true);
}

int	Contact::getIndex(void)
{
	return (this->_index);
}

std::string Contact::getContactInfo(int i)
{
	switch (i)
	{
		case 0 :
				return (this->_firstName);		
		case 1 :
				return (this->_lastName);		
		case 2 :
				return (this->_nickName);		
		case 3 :
				return (this->_phoneNumber);
		case 4 :
				return (this->_darkestSecret);
	}
	return (NULL);
}

std::string	Contact::_getInfo(std::string str) const
{
	std::string input("");
	std::cout << str << std::flush;
	while (std::getline(std::cin, input))
	{
		if (!input.empty() && std::cin.good())
			break ;
		else 
		{
			std::cin.clear();	
			std::cout << "Invalid Input, try again" << std::endl;
			std::cout << str << std::flush;
		}
	}
	return (input);
}

void	Contact::init(int i)
{
	std::string input("");
	std::cout << "\nAdding New Contact" << std::endl;
	this->_index = i + 1;
	this->_firstName = this->_getInfo("Please enter a first name: ");
	this->_lastName = this->_getInfo("Please enter a last name: ");
	this->_nickName = this->_getInfo("Please enter a nickname ");
	this->_phoneNumber = this->_getInfo("Please enter a phone number: ");
	this->_darkestSecret = this->_getInfo("Please enter the darkest Secret: ");
	std::cout << "\nPress \"0\" to exit..." << std::endl;
	while (getline(std::cin, input))
	{
		if (input.compare("0") == 0)
			return ;
		else
			std::cout << "\nPress \"0\" to exit..." << std::endl;
	}
	std::cout << std::endl;
}
