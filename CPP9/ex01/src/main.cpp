/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:12:48 by deordone          #+#    #+#             */
/*   Updated: 2025/02/11 23:15:07 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static bool num_limits(i_vec cont, int min, int max)
{
	i_vec::iterator it(cont.begin());
	for (unsigned int i(0); i < cont.size(); i++)
	{
		it++;
		if (!(*it >= min && *it <= max))
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
		rpn.perform_operation(cont);
		for (s_vec::iterator it(cont.begin()); it != cont.end(); it++)
			std::cout << *it << "\n";
	}
	else
		printf("Usage: \n ./RPN  \"40 2 +\"\n");
	return (0);
}
