/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:27:24 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 13:28:13 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &t_inter);
		Intern &operator=(const Intern &t_inter);
		~Intern();

		AForm	*makeForm(std::string t_form, std::string t_target);
		AForm	*makeShrubbery(std::string &t_target) const;
		AForm	*makeRobotomy(std::string &t_target) const;
		AForm	*makePresidential(std::string &t_target) const;
};

typedef AForm	*(Intern::*fun_form)(std::string &t_target) const;

#endif // INTERN_HPP
