/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:12:48 by deordone          #+#    #+#             */
/*   Updated: 2025/01/20 13:34:07 by deordone         ###   ########.fr       */
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

// static bool num_limits(svec cont, int min, int max)
// {
// 	for (svec::iterator it(str.begin()); it < str.end(); it++)
// 	{
// 		if (*it)
// 	}
// 	// los numeros que hayan tengo que pasarlos a int y verificar que sean mayores o iguales a 0 y menores o iguales a 9 
// }

static s_vec split_vec(std::string str, char delimiter, s_vec cont)
{
	for (std::string::iterator it(str.begin()); it < str.end(); it++)
	{
		if (*it != delimiter)
			cont.push_back(*it);
	}
	return (cont);
	// num_limits(cont, 0, 9);
}

static void parse(char *av[], s_vec &cont)
{
	std::string allowed = "0123456789 +-/*";
	std::string str(av[1]);
	if (!findAllowedChars(str, allowed))
		printf("Error: Invalid Prompt\n");
	split_vec(av[1], ' ', cont);
	//necesito hacer un split de todo y meterlo dentro de un s_vec
}

int main (int ac, char *av[])
{
	RPN rpn;
	s_vec cont;
	if (ac == 2)
	{
		parse(av, cont);
		for (s_vec::iterator it(cont.begin()); it < cont.end(); it++)
		{
			std::cout << *it << "\n";
		}
		// rpn.perform_operation(av[1]);
	}
	else
		printf("Usage: \n ./RPN  \"40 2 +\"\n");
	return (0);
}
