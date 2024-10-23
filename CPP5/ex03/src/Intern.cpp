/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:27:07 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 13:27:09 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &t_intern)
{
	*this = t_intern;
}

Intern &Intern::operator=(const Intern &t_intern)
{
	(void)t_intern;
	return (*this);
}

Intern::~Intern()
{}

AForm *Intern::makeForm(std::string t_form, std::string t_target)
{	
	fun_form ft_form[] = {&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	std::string	forms[] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *form;
	unsigned int i(0);
	while (i < 3 && forms[i].compare(t_form))
		i++;
	if (i < 3)
	{
		form = (this->*ft_form[i])(t_target);
		return(form);
	}
	return (NULL);
}

AForm *Intern::makeShrubbery(std::string &t_target) const
{
	AForm *form = new ShrubberyCreationForm(t_target);
	return (form);
}

AForm *Intern::makeRobotomy(std::string &t_target) const
{
	AForm *form = new RobotomyRequestForm(t_target);
	return (form);
}

AForm *Intern::makePresidential(std::string &t_target) const
{
	AForm *form = new PresidentialPardonForm(t_target);
	return (form);
}
