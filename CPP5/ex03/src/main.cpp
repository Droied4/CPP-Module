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
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
			std::cout << "\n \033[32m TEST [RobotomyRequestForm] \033[0m \n";
			Bureaucrat bur("Jonathan", 1);
			RobotomyRequestForm rrf("Deivid");
			bur.signForm(rrf);
			bur.executeForm(rrf);
			Bureaucrat bur2("Javier", 70);
			RobotomyRequestForm rrf2("Deivid");
			bur2.signForm(rrf2);
			bur2.executeForm(rrf2);
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
			std::cout << "\n \033[32m TEST [PresidentialPardonForm] \033[0m \n";
			Bureaucrat bur("Jaimito", 1);
			PresidentialPardonForm ppf("Deivid");
			bur.signForm(ppf);
			bur.executeForm(ppf);
			Bureaucrat bur2("ELver", 13);
			PresidentialPardonForm ppf2("Deivid");
			bur2.signForm(ppf2);
			bur2.executeForm(ppf2);
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
		std::cout << "\n------------------\n";
	}

	return (0);
}
