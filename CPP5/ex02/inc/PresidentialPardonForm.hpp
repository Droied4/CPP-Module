/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:21:42 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:51:05 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string	m_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string t_target);
		PresidentialPardonForm(const PresidentialPardonForm &t_obj);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &t_obj);
		~PresidentialPardonForm();
	
		std::string 	getTarget() const;

		bool			execute(Bureaucrat const &t_executor);
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &t_obj);

#endif // PRESIDENTIALPARDONFORM_HPP
