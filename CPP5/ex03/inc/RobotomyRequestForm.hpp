/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:21:42 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:51:05 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string	m_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string t_target);
		RobotomyRequestForm(const RobotomyRequestForm &t_obj);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &t_obj);
		~RobotomyRequestForm();
	
		std::string 	getTarget() const;

		bool			execute(Bureaucrat const &t_executor);
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &t_obj);

#endif // ROBOTOMYREQUESTFORM_HPP
