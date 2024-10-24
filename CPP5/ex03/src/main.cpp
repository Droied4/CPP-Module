/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:32:55 by droied            #+#    #+#             */
/*   Updated: 2024/10/24 09:08:46 by droied           ###   ########.fr       */
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
			AForm *scf;
			AForm *rrf;
			AForm *ppf;
			scf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
			rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
			ppf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
			bur.signForm(*scf);
			bur.signForm(*rrf);
			bur.signForm(*ppf);
			bur.executeForm(*scf);
			bur.executeForm(*rrf);
			bur.executeForm(*ppf);
			delete scf;
			delete rrf;
			delete ppf;
		}
		catch(std::exception & e)
		{
			std::cout << "FAIL ❌\n" << e.what() << "\n";
		}
		std::cout << "\n------------------\n";
	}
	return (0);
}
