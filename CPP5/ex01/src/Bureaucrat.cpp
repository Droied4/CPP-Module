/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:58:55 by droied            #+#    #+#             */
/*   Updated: 2024/10/18 13:00:06 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("Bureaucrat")
{
	this->m_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string t_name, short int t_grade) : m_name(t_name)
{
	if (t_grade < 0)
		throw Bureaucrat::GradeTooLowException();
	if (t_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->m_grade = t_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &t_obj)
{
	*this = t_obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &t_obj)
{
	if (this != &t_obj)
		this->m_grade = t_obj.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &t_obj)
{
	if (t_obj.getGrade() < 0 || t_obj.getGrade() > 150)
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
	if (t_grade < 0)
		throw Bureaucrat::GradeTooLowException();
	if (t_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	this->m_grade = t_grade;
}

void	Bureaucrat::increaseGrade(short int t_increase)
{
	if (t_increase < 0)
		throw Bureaucrat::GradeTooLowException();
	if (t_increase > 150)
		throw Bureaucrat::GradeTooHighException();
	this->setGrade(this->getGrade() - t_increase);
}

void	Bureaucrat::decreaseGrade(short int t_decrease)
{
	if (t_decrease < 0)
		throw Bureaucrat::GradeTooLowException();
	if (t_decrease > 150)
		throw Bureaucrat::GradeTooHighException();
	this->setGrade(this->getGrade() + t_decrease);
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("A bureaucrat can't have a grade greater than 150.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("A bureaucrat can't have a grade lower than 1.");
}
