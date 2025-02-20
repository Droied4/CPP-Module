/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:10:29 by deordone          #+#    #+#             */
/*   Updated: 2025/02/19 15:21:31 by deordone         ###   ########.fr       */
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

void stoi_vec(s_vec str, i_vec &cont)
{
	int num(0);
	for(s_vec::iterator it(str.begin()); it != str.end(); it++)
	{	
		std::stringstream ss(*it);
		ss >> num;
		cont.push_back(num);
	}
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

int sum(i_vec num, unsigned long num_pos)
{
	i_vec::iterator it(num.begin());
	i_vec::iterator i(num.begin());
	std::advance(it, num_pos);
	std::advance(i, num_pos - 1);
	int res(0);
	res = *i + *it;
	return (res);
}

int res(i_vec num, unsigned long num_pos)
{
	i_vec::iterator it(num.begin());
	i_vec::iterator i(num.begin());
	std::advance(it, num_pos);
	std::advance(i, num_pos - 1);
	int res(0);
	res = *i - *it;
	return (res);
}

int mul(i_vec num, unsigned long num_pos)
{
	i_vec::iterator it(num.begin());
	i_vec::iterator i(num.begin());
	std::advance(it, num_pos);
	std::advance(i, num_pos - 1);
	int res(0);
	res = *i * *it;
	return (res);
}

int div(i_vec num, unsigned long num_pos)
{
	i_vec::iterator it(num.begin());
	i_vec::iterator i(num.begin());
	std::advance(it, num_pos);
	std::advance(i, num_pos - 1);
	int res(0);
	if (*it != 0)
		res = *i / *it;
	else
	{
		printf("Illegal division between zero\nFuck u bitch\n");
		exit(1);
	}
	return (res);
}

bool operation(s_vec &cont, s_vec::iterator pos, int (* f)(i_vec, unsigned long))
{
	i_vec num;
	stoi_vec(cont, num);
	unsigned long num_pos(0);
	for (s_vec::iterator it(cont.begin()); it != cont.end(); it++)
	{
		s_vec::iterator i(it);
		i++;
		if (i == pos)
			break ;
		num_pos++;
	}	
	int res = f(num, num_pos);
	s_vec::iterator it(cont.begin());
	for (unsigned int i(0); i < 3; i++)
	{
		it = cont.begin();
		std::advance(it, num_pos - 1);
		cont.erase(it);
	}
	std::ostringstream oss;
	oss << res;
	std::string result;
	result = oss.str();
	it = cont.begin();
	std::advance(it, num_pos - 1);
	cont.insert(it, result);
	return (true);
}

bool	which_oper(s_vec &cont, s_vec::iterator pos, char symbol)
{
	bool result(true);
	if (symbol == '+')
		result = operation(cont, pos, sum);
	else if (symbol == '-')
		result = operation(cont, pos, res);
	else if (symbol == '*')
		result = operation(cont, pos, mul);
	else if (symbol == '/')
		result = operation(cont, pos, div);
	return (result);
}

bool two_values(s_vec::iterator pos, s_vec &c)
{
	s_vec::iterator b(c.begin());
	for (int i(0); i < 2; i++)
	{
		if (pos == b)
			return (false);
		pos--;
	}
	return (true);
}

void	RPN::perform_operation(s_vec &cont)
{
	for (s_vec::iterator it(cont.begin()); it != cont.end(); it++)
	{
		if (findAllowedChars(*it, "*+/-"))
		{
			std::string symbol(*it);
			if (!two_values(it, cont))
				return (printf("Error\n"), exit(1));
			if (!which_oper(cont, it, symbol[0]))
				return (printf ("Error\n"), exit(1));
			it = cont.begin();
		}
	}
}
