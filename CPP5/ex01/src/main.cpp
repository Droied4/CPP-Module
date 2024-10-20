/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:32:55 by droied            #+#    #+#             */
/*   Updated: 2024/10/18 13:04:41 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	{
		try
		{
			std::cout << "\n \033[32m TEST 01 \033[0m \n";
			Bureaucrat bur("Tony", 1);
			Form form1;
			bur.signForm(form1);
			std::cout << "\n------------------\n";
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
	}
	{
		try 
		{
			std::cout << "\n \033[32m TEST 02 \033[0m \n";
			Bureaucrat bur("Tony", 44);
			Form form1;
			bur.signForm(form1);
			std::cout << "\n------------------\n";
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
	}
	return (0);
}
