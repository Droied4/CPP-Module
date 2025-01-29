/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:16:44 by deordone          #+#    #+#             */
/*   Updated: 2025/01/29 17:31:33 by droied           ###   ########.fr       */
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

static void parse(int ac, char *av[], std::string &check)
{
	for (int i(1); i < ac; i++)
	{
		check += av[i];
		check += " ";
	}
	if (!findAllowedChars(check, "0123456789 "))
		return (std::cout << "Only positive numbers\n", exit(1));
}

int main (int ac, char *av[])
{
	std::string input;
	PmergeMe ford;
	map	m_cont;
	mmap mm_cont;
	 
	if (ac <= 3000)
	{
		parse(ac, av, input);
		std::cout << "Before: " << input << "\n";
		ford.insertValue(input, m_cont);
		ford.insertValue(input, mm_cont);
	
		ford.print(m_cont);
		ford.print(mm_cont);
	}
	else
		std::cout << "Your program must be able to handle at least 3000 different integers.\n That's right i'm lazy as fck\n";
	return (0);
}
