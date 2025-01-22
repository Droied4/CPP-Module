/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:10:29 by deordone          #+#    #+#             */
/*   Updated: 2025/01/22 16:03:05 by deordone         ###   ########.fr       */
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

// bool sum(s_vec &cont, s_vec::iterator pos)
// {
// 	return (true);
// }

// bool res(s_vec &cont, s_vec::iterator pos)
// {
// 	return (true);
// }

// bool mul(s_vec &cont, s_vec::iterator pos)
// {
// 	return (true);
// }

// bool div(s_vec &cont, s_vec::iterator pos)
// {
// 	return (true);
// }

// bool operation(s_vec &cont, s_vec::iterator pos void (* f)(s_vec, s_vec::iterator))
// {
// 	return (f(cont, pos));
// }

// bool	which_oper(s_vec &cont, s_vec::iterator pos, char symbol)
// {
// 	bool result(true);
// 	switch (symbol)
// 	{
// 		case '+':
// 			result = operation(cont, pos, &sum);
// 			break ;
// 		case '-':
// 			result = operation(cont, pos, &res);
// 			break ;
// 		case '*':
// 			result = operation(cont, pos, &mul);
// 			break ;
// 		case '/':
// 			result = operation(cont, pos, &div);
// 			break ;
// 	}
// 	return (true);
// }

bool two_values(s_vec::iterator pos)
{
	pos--;
	if (!(pos->empty()))
	{
		pos--;
		if ((pos->empty()))
			return (false);
		else
			return (true);
	}
	return (false);
}

void	RPN::perform_operation(s_vec cont)
{
	for (s_vec::iterator it(cont.begin()); it < cont.end(); it++)
	{
		if (findAllowedChars(*it, "*+/-"))
		{
			if (!two_values(it))
				return (printf("Error\n"), exit(1));
			// if (!which_oper(cont, it, *it))
				// printf ("Error\n", exit(1));
			//cuando lo encuentre toma los dos numeros anteriores y aplica la operacion correspondiente.
			//elimina los dos numeros y el signo.
			//si no hay dos numeros mandar error.
			//luego se reincia el iterador.
		}
	}
}
