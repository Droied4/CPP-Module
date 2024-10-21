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
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	{
		try
		{
			std::cout << "\n \033[32m TEST [ShrubberyCreationForm] \033[0m \n";
			Bureaucrat bur("Deivid", 1);
			ShrubberyCreationForm scf("exist");
			bur.executeForm(scf);
			bur.signForm(scf);
			bur.executeForm(scf);
			Bureaucrat bur2("Santiago", 142);
			ShrubberyCreationForm scf2("this_shouldn't_exist");
			bur2.signForm(scf2);
			bur2.executeForm(scf2);
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
		std::cout << "\n------------------\n";
	}
	{
		try 
		{
			std::cout << "\n \033[32m TEST 02 \033[0m \n";
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
		std::cout << "\n------------------\n";
	}
	return (0);
}
