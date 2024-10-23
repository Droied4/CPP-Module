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
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{
	{
		try
		{
			std::cout << "\n \033[32m TEST [Intern] \033[0m \n";
			Intern someRandomIntern;				
			Bureaucrat	bur("Crispy", 1);
			AForm *rrf;
			rrf = someRandomIntern.makeForm("RobotomyRequestForm", "bender");
			bur.signForm(*rrf);
			bur.executeForm(*rrf);
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
		std::cout << "\n------------------\n";
	}
	return (0);
}
