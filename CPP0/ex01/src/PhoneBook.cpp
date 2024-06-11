/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:37:21 by deordone          #+#    #+#             */
/*   Updated: 2024/06/11 23:22:12 by droied           ###   ########.fr       */
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

void Phone::welcome(void) const 
{
	std::cout << std::endl;
	std::cout << "Welcome to your Phone Book ☎️  " << std::endl;
	std::cout << std::endl;
	std::cout << "•---------• USAGE •---------•" << std::endl;
	std::cout << "ADD : To add a contact." << std::endl;
	std::cout << "SEARCH : To search for a contact." << std::endl;
	std::cout << "EXIT : to quite the PhoneBook." << std::endl;
	std::cout << "•----------------------------•";
	std::cout << std::endl;
}


