/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:15:56 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:16:01 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*▂▃▄▅▆▇█▓▒░CONSTRUCTOR░▒▓█▇▆▅▄▃▂*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), m_target("default_target")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string t_target) : AForm("PresidentialPardonForm", 25, 5), m_target(t_target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &t_obj) : AForm(t_obj), m_target(t_obj.getTarget())
{
	*this = t_obj;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

/*▂▃▄▅▆▇█▓▒░OPERATOR░▒▓█▇▆▅▄▃▂*/
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &t_obj) 
{

	if(this != &t_obj)
		this->m_target = t_obj.getTarget();
	return (*this);
}


/*▂▃▄▅▆▇█▓▒░GETTER - SETTERS░▒▓█▇▆▅▄▃▂*/

std::string	PresidentialPardonForm::getTarget() const
{
	return(this->m_target);
}

/*▂▃▄▅▆▇█▓▒░MEMBER FUNCTION░▒▓█▇▆▅▄▃▂*/

bool PresidentialPardonForm::execute(Bureaucrat const &t_executor)
{
	(void)t_executor;
	std::cout << this->m_target << " has been pardoned by Zaphod Beeblebrox\n";
	return (true);
}
