/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:44:24 by deordone          #+#    #+#             */
/*   Updated: 2024/07/11 15:51:57 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

int	main(void)
{
	Phone	MyPhone;

	std::string input("");
	MyPhone.welcome();
	while (getline(std::cin, input))
	{
		if (input.compare("EXIT") == 0 || input.compare("3") == 0)
			return (0);
		else if (input.compare("ADD") == 0 || input.compare("1") == 0)
			MyPhone.addContact();
		else if (input.compare("SEARCH") == 0 || input.compare("2") == 0)
			MyPhone.findContact();
		else
			std::cout << "Invalid Input" << std::endl;
		MyPhone.welcome();
	}
	return (0);
}
