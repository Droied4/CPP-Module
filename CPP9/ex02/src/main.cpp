/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:16:44 by deordone          #+#    #+#             */
/*   Updated: 2025/01/28 12:07:05 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool findAllowedChars(std::string str, std::string allowed)
{
	std::string::iterator str_it(str.begin());
	int flag(0);
	while (str_it < str.end())
	{
		for (std::string::iterator all_it(allowed.begin()); all_it < allowed.end(); all_it++)
	    {
	        if (*str_it != *all_it)
	 	       flag = 1;
	        else
	        {
		        flag = 0;
		        break ;
			}
		}
	        if (flag)
	        	return (false);
		str_it++;
	}
	return (true);
}

static bool dupSymbol(std::string str)
{
	bool flag(true);
	for (std::string::iterator it(str.begin()); it < str.end(); it++)
	{
		char symbol(*it);
		if (symbol == '+' || symbol == '-')
		{
			if (!flag)
				return (false);
			flag = false;
		}
		else
			flag = true;
	}
	return (true);
}

static void parse(int ac, char *av[])
{
	std::string check;
	for (int i(1); i < ac; i++)
	{
		check += av[i];
		check += " ";
	}
	if (!findAllowedChars(check, "0123456789 +-"))
		return (std::cout << "Not a number\n", exit(1));
	if (!dupSymbol(check))
		return (std::cout << "Invalid Symbol\n", exit(1));
}

int main (int ac, char *av[])
{
	if (ac <= 3000)
	{
		parse(ac, av);
	}
	else
		std::cout << "Your program must be able to handle at least 3000 different integers.\n That's right i'm lazy as fck\n";
	return (0);
}
