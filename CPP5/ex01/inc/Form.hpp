/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:15:28 by deordone          #+#    #+#             */
/*   Updated: 2024/10/18 13:10:53 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string		m_name;
		bool					m_signed;
		const short int			m_to_sign;
		const short int			m_to_execute;
	public:
		Form();
		Form(std::string t_name, short int t_to_sign, short int t_to_execute);
		Form(const Form &t_obj);
		Form &operator=(const Form &t_obj);
		~Form();

		std::string 	getName() const;
		bool			getSigned() const;
		short int		getToSign() const;
		short int		getToExecute() const;

		bool	beSigned(Bureaucrat &t_bureaucrat);

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

std::ostream &operator<<(std::ostream &out, const Form &t_obj);

#endif // FORM_HPP
