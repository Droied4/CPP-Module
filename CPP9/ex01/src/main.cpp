/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:12:48 by deordone          #+#    #+#             */
/*   Updated: 2025/01/21 23:48:23 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static void stoi_vec(s_vec str, i_vec &cont)
{
	int num(0);
	for(s_vec::iterator it(str.begin()); it < str.end(); it++)
	{	
		std::stringstream ss(*it);
		ss >> num;
		cont.push_back(num);
	}
}

static bool num_limits(i_vec cont, int min, int max)
{
	for (unsigned int i(0); i < cont.size(); i++)
	{
		if (!(cont[i] >= min && cont[i] <= max))
			return (false);
	}
	return (true);
}

static s_vec split_vec(std::string str, char delimiter, s_vec &cont)
{
	std::istringstream stream(str);
	std::string token;

	while(std::getline(stream, token, delimiter))
	{
		if (!token.empty())
			cont.push_back(token);
	}
	return (cont);
}

static void parse(char *av[], s_vec &tokens)
{
	std::string allowed = "0123456789 +-/*";
	std::string str(av[1]);
	if (!findAllowedChars(str, allowed))
		return (printf("Error: Invalid Prompt\n"), exit(1));
	split_vec(av[1], ' ', tokens);
	i_vec cont;
	stoi_vec(tokens, cont);
	if (!num_limits(cont, 0, 9))
		return (printf("Error: Choose numbers between 0 - 9\n"), exit(1));
}

int main (int ac, char *av[])
{
	RPN rpn;
	s_vec cont;
	if (ac == 2)
	{
		parse(av, cont);
		for (s_vec::iterator it(cont.begin()); it < cont.end(); it++)
			std::cout << *it << "\n";
		rpn.perform_operation(cont);
	}
	else
		printf("Usage: \n ./RPN  \"40 2 +\"\n");
	return (0);
}
