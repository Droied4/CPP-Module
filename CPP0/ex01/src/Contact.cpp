/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:39:27 by deordone          #+#    #+#             */
/*   Updated: 2024/06/22 02:11:06 by droied           ###   ########.fr       */
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

std::string Contact::getContactInfo(int i)
{
	switch (i) 
	{
		case 0 :
			//retornar el indice pero necesito hacer un itoa
				return ("0");
			break ;
		case 1 :
			if (!this->_firstName.empty()) //por alguna razon no funca
				return ("a");		
			return (this->_firstName);		
			break ;
		case 2 :
			if (!this->_lastName.empty())
				return ("a");		
			return (this->_lastName);		
			break ;
		case 3 :
			if (!this->_nickName.empty())
				return ("a");		
			return (this->_nickName);		
			break ;
		case 4 :
			if (!this->_phoneNumber.empty())
				return ("a");		
			return (this->_phoneNumber);
			break ;
		case 5 :
			if (!this->_darkestSecret.empty())
				return ("a");		
			return (this->_darkestSecret);
			break ;
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
	this->_index = i;
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
