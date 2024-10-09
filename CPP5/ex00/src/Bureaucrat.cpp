/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:58:55 by droied            #+#    #+#             */
/*   Updated: 2024/10/09 20:30:34 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->m_name = "Bureaucrat";
	this->m_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string t_name, short int t_grade)
{
	if (t_grade > 150 || t_grade < 0)
	{
		std::cout << "shit\n";
		return ;
		/*Throw*/
	}
	this->m_name = t_name;
	this->m_grade = t_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &t_obj)
{
	*this = t_obj;
}

Bureaucrat &operator=Bureaucrat(const Bureaucrat &t_obj)
{
	if (this != t_obj)
	{
		this->m_name = t_obj.getName();
		this->m_grade = t_obj.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->m_name);
}

short int Bureaucrat::getGrade() const
{
	return (this->m_grade);
}

void	Bureaucrat::setGrade(short int t_grade)
{
	if (t_grade < 0 || t_grade > 150)
	{
		std::cout << "shit\n";
		return ;
		/*Throw*/
	}
	this->m_grade = t_grade;
}

void	Bureaucrat::increaseGrade(Bureaucrat &t_bureaucrat, short int t_increase)
{
	short int result;
	result = t_bureaucrat.getGrade() - t_increase;
	if (t_increase < 0 || t_increase > 150 
		|| result < 0 || result > 150)
	{
		std::cout << "shit\n";
		return ;
		/*Throw*/
	}
	t_bureaucrat.setGrade(result);
}

void	Bureaucrat::decreaseGrade(Bureaucrat &t_bureaucrat, short int t_decrease)
{
	short int result;
	result = t_bureaucrat.getGrade() + t_increase;
	if (t_increase < 0 || t_increase > 150 
		|| result < 0 || result > 150)
	{
		std::cout << "shit\n";
		return ;
		/*Throw*/
	}
	t_bureaucrat.setGrade(result);
}
