/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:41:35 by droied            #+#    #+#             */
/*   Updated: 2024/10/11 15:01:23 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream> 

class Bureaucrat {
private:
	std::string 	m_name;
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

	void	increaseGrade(short int t_increase);
	void	decreaseGrade(short int t_decrease);
};

std::ostream &operator<<( std::ostream &out, Bureaucrat const &t_obj);

#endif // BUREAUCRAT_HPP
