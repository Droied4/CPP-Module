/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:15:28 by deordone          #+#    #+#             */
/*   Updated: 2024/10/24 09:06:34 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
	private:
		const std::string		m_name;
		bool					m_signed;
		const short int			m_to_sign;
		const short int			m_to_execute;
	public:
		AForm();
		AForm(std::string t_name, short int t_to_sign, short int t_to_execute);
		AForm(const AForm &t_obj);
		AForm &operator=(const AForm &t_obj);
		virtual ~AForm();

		std::string 	getName() const;
		bool			getSigned() const;
		short int		getToSign() const;
		short int		getToExecute() const;

		virtual bool	beSigned(Bureaucrat &t_bureaucrat);
		virtual bool	execute(Bureaucrat const &t_bureaucrat) = 0;

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char *	what() const throw();
		};

};

std::ostream &operator<<(std::ostream &out, const AForm &t_obj);

#endif // AFORM_HPP
