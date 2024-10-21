/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:16:16 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:16:49 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*▂▃▄▅▆▇█▓▒░CONSTRUCTOR░▒▓█▇▆▅▄▃▂*/

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), 	m_target("default_target")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t_target) : AForm("ShrubberyCreationForm", 145, 137), m_target(t_target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &t_obj) : AForm(t_obj), m_target(t_obj.getTarget())
{
	*this = t_obj;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/*▂▃▄▅▆▇█▓▒░OPERATOR░▒▓█▇▆▅▄▃▂*/
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &t_obj) 
{

	if(this != &t_obj)
		this->m_target = t_obj.getTarget();
	return (*this);
}


/*▂▃▄▅▆▇█▓▒░GETTER - SETTERS░▒▓█▇▆▅▄▃▂*/

std::string	ShrubberyCreationForm::getTarget() const
{
	return(this->m_target);
}

/*▂▃▄▅▆▇█▓▒░MEMBER FUNCTION░▒▓█▇▆▅▄▃▂*/

bool ShrubberyCreationForm::execute(Bureaucrat const &t_executor)
{
	(void)t_executor;
	std::ofstream	file;
	file.open(&(this->m_target + "_shrubbery")[0], std::ios::out | std::ios::trunc);
	if (!file.is_open())
	{
		std::cerr << "Error creating the file" << std::endl;
		return (false);
	}
		file << "       _-_" << std::endl;
		file << "    /~~   ~~\\" << std::endl;
		file << " /~~         ~~\\" << std::endl;
		file << "{               }" << std::endl;
		file << " \\  _-     -_  /" << std::endl;
		file << "   ~  \\ //  ~" << std::endl;
		file << "_- -   | | _- _" << std::endl;
		file << "  _ -  | |   -_" << std::endl;
		file << "      // \\\\" << std::endl;
	return (true);
}
