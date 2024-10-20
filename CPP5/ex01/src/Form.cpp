/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:11:04 by deordone          #+#    #+#             */
/*   Updated: 2024/10/18 13:12:57 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_name("default"), m_to_sign(42), m_to_execute(42)
{
	this->m_signed = false;
	std::cout << "Form " << this->m_name << " Created\n";
}

Form::Form(std::string t_name, short int t_to_sign,
	short int t_to_execute) : m_name(t_name), m_to_sign(t_to_sign),
	m_to_execute(t_to_execute)
{
	this->m_signed = false;
	std::cout << "Form Created\n";
}

Form::Form(const Form &t_obj) : m_name("default"), m_to_sign(42),
	m_to_execute(42)
{
	*this = t_obj;
}

Form &Form::operator=(const Form &t_obj)
{
	if (this != &t_obj)
		this->m_signed = t_obj.getSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &t_obj)
{
	t_obj.getSigned() ? out << "Signed" : out << "Unsigned";
	return (out << "\nForm Name: " << t_obj.getName() << "\n Grade Sign: " << t_obj.getToSign() << "\n Grade Execute: " << t_obj.getToExecute() << "\n");
}

Form::~Form()
{
	std::cout << "Form destroy\n";
}

std::string Form::getName(void) const
{
	return (this->m_name);
}

bool Form::getSigned(void) const
{
	return (this->m_signed);
}

short int Form::getToSign(void) const
{
	return (this->m_to_sign);
}

short int Form::getToExecute(void) const
{
	return (this->m_to_execute);
}

bool	Form::beSigned(Bureaucrat &t_bureaucrat)
{
	if (!this->m_signed && t_bureaucrat.getGrade() <= this->m_to_sign)
	{
		this->m_signed = true;
		return (true);
	}
	else
		throw Form::GradeTooLowException();
	return (false);
}

const char *	Form::GradeTooHighException::what() const throw() 
{
	return ("The grade is to high");
}

const char *	Form::GradeTooLowException::what() const throw() 
{
	return ("The grade is to low");
}
