/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:10:29 by deordone          #+#    #+#             */
/*   Updated: 2025/01/20 13:35:33 by deordone         ###   ########.fr       */
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

void	perform_operation(s_vec)
{
	//necesito 
}
