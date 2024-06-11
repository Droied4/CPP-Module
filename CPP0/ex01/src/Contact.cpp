/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:39:27 by deordone          #+#    #+#             */
/*   Updated: 2024/06/12 00:27:36 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
        return ;
}

Contact::~Contact(void)
{
        return ;
}

std::string	Contact::_getInfo(std::string str) const
{
	std::string input = "";
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

void	Contact::init(void)
{
	std::cout << "\nAdding New Contact" << std::endl;
	this->_firstName = this->_getInfo("Please enter a first name: ");
	this->_lastName = this->_getInfo("Please enter a last name: ");
	this->_nickName = this->_getInfo("Please enter a nickname ");
	this->_phoneNumber = this->_getInfo("Please enter a phone number: ");
	this->_darkestSecret = this->_getInfo("Please enter the darkest Secret: ");
	std::cout << std::endl;
}
