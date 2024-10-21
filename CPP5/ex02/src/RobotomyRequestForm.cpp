/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:16:16 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:16:49 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*▂▃▄▅▆▇█▓▒░CONSTRUCTOR░▒▓█▇▆▅▄▃▂*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), m_target("default_target")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string t_target) : AForm("RobotomyRequestForm", 72, 45), m_target(t_target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &t_obj) : AForm(t_obj), m_target(t_obj.getTarget())
{
	*this = t_obj;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

/*▂▃▄▅▆▇█▓▒░OPERATOR░▒▓█▇▆▅▄▃▂*/
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &t_obj) 
{

	if(this != &t_obj)
		this->m_target = t_obj.getTarget();
	return (*this);
}


/*▂▃▄▅▆▇█▓▒░GETTER - SETTERS░▒▓█▇▆▅▄▃▂*/

std::string	RobotomyRequestForm::getTarget() const
{
	return(this->m_target);
}

/*▂▃▄▅▆▇█▓▒░MEMBER FUNCTION░▒▓█▇▆▅▄▃▂*/

bool RobotomyRequestForm::execute(Bureaucrat const &t_executor)
{
	(void)t_executor;
	std::cout << this->m_target << " has been robotomized successfully 50% of the time.\n";
	return (true);
}
