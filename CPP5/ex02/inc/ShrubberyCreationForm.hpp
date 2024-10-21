/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:21:42 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:51:05 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	m_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string t_target);
		ShrubberyCreationForm(const ShrubberyCreationForm &t_obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &t_obj);
		~ShrubberyCreationForm();
	
		std::string 	getTarget() const;

		bool			execute(Bureaucrat const &t_executor);
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &t_obj);

#endif // SHRUBBERYCREATIONFORM_HPP
