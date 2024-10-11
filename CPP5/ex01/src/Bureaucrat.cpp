/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:58:55 by droied            #+#    #+#             */
/*   Updated: 2024/10/11 15:03:59 by deordone         ###   ########.fr       */
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
	try {
		if (t_grade < 0 || t_grade > 150)
			throw("error: cannot create the grade is out of range\n");
	}
	catch (const char *t_msg) {
		std::cerr << t_msg;
		return ;
	}
	this->m_name = t_name;
	this->m_grade = t_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &t_obj)
{
	*this = t_obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &t_obj)
{
	if (this != &t_obj)
	{
		this->m_name = t_obj.getName();
		this->m_grade = t_obj.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &t_obj)
{
	if (t_obj.getName().empty())
		return (out << "N/A\n");
	return (out << "Bureaucrat: " << t_obj.getName() << "\n Grade: " << t_obj.getGrade() << "\n");
}

Bureaucrat::~Bureaucrat()
{
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
	try {
		if (t_grade < 0 || t_grade > 150)
			throw("error: it cannot set grade\n");
	}
	catch (const char *t_msg) {
		std::cerr << t_msg;
		return ;
	}
	this->m_grade = t_grade;
}

void	Bureaucrat::increaseGrade(short int t_increase)
{
	try {
		if (t_increase < 0 || t_increase > 150)
			throw("error: it cannot increase\n");
	}
	catch (const char *t_msg) {
		std::cerr << t_msg;
		return ;
	}
	this->setGrade(this->getGrade() - t_increase);
}

void	Bureaucrat::decreaseGrade(short int t_decrease)
{
	try {
		if (t_decrease < 0 || t_decrease > 150)
			throw("error: it cannot decrease\n");
	}
	catch (const char *t_msg) {
		std::cerr << t_msg;
		return ;
	}
	this->setGrade(this->getGrade() + t_decrease);
}
