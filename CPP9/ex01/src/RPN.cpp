/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:10:29 by deordone          #+#    #+#             */
/*   Updated: 2025/01/22 00:03:43 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN &t_obj)
{
	*this = t_obj;
}

RPN::~RPN()
{}

RPN &RPN::operator=(const RPN &t_obj)
{
	if (&t_obj != this)
	{

	}
	return (*this);
}

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

void	RPN::perform_operation(s_vec cont)
{
	for (s_vec::iterator it(cont.begin()); it < cont.end(); it++)
	{
		if (findAllowedChars(*it, "*+/-"))
		{
			//cuando lo encuentre toma los dos numeros anteriores y aplica la operacion correspondiente.
			//elimina los dos numeros y el signo.
			//si no hay dos numeros mandar error.
			//luego se reincia el iterador.
			std::cout << *it << "\n";
		}
	}
}
