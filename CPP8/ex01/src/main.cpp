/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:14:34 by deordone          #+#    #+#             */
/*   Updated: 2024/11/03 17:37:50 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span vec(2);
	{
		try 
		{
			vec.addNumber(1);
			vec.addNumber(4);
			vec.addNumber(2);
			vec.addNumber(8);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	return (0);
}
