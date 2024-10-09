/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:41:35 by droied            #+#    #+#             */
/*   Updated: 2024/10/09 20:31:28 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream> 

class Bureaucrat {
private:
	const std::string 	m_name;
	short int			m_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string t_name, short int t_grade);
	Bureaucrat(const Bureaucrat &t_obj);
	Bureaucrat &operator=(const Bureaucrat &t_obj);
	~Bureaucrat();

	std::string	getName() const;
	short int	getGrade() const;
	void		setGrade(short int t_grade);

	void		increaseGrade(Bureaucrat &t_bureaucrat, unsigned char t_increase);
	void		decreaseGrade(Bureaucrat &t_bureaucrat, unsigned char t_decrease);
};

#endif // BUREAUCRAT_HPP
