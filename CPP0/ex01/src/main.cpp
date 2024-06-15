/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:44:24 by deordone          #+#    #+#             */
/*   Updated: 2024/06/15 19:01:26 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phone.hpp"
#include "Contact.hpp"

int main (void)
{
	Phone 	MyPhone;
	std::string input = "";
	MyPhone.welcome();
	while (getline(std::cin, input))
	{
		if (input.compare("EXIT") == 0 || input.compare("3") == 0)
			return (0);
		else if (input.compare("ADD") == 0 || input.compare("1") == 0)
			MyPhone.addContact();
		else if (input.compare("SEARCH") == 0 || input.compare("2") == 0)
			std::cout << "search received\n";
		else
			std::cout << "Invalid Input" << std::endl;
	}
	return (0);
}

