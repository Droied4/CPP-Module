/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:12:48 by deordone          #+#    #+#             */
/*   Updated: 2025/01/16 15:12:59 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool findAllowedChars(std::string str, std::string allowed)
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

static void parse(char *av[])
{	
	std::string allowed = "0123456789 +-/*";
	std::string str(av[1]);
	if (!findAllowedChars(str, allowed))
	{
		printf("Error: Invalid Prompt\n");
	}
}

int main (int ac, char *av[])
{
	if (ac == 2)
	{
		parse(av);
	}
	else
		printf("Usage: \n ./RPN  \"40 2 +\"\n");
	return (0);
}
