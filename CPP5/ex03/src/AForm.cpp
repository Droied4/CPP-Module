/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:11:04 by deordone          #+#    #+#             */
/*   Updated: 2024/10/21 10:43:07 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : m_name("default"), m_to_sign(42), m_to_execute(42)
{
	this->m_signed = false;
	std::cout << "AForm " << this->m_name << " Created\n";
}

AForm::AForm(std::string t_name, short int t_to_sign,
	short int t_to_execute) : m_name(t_name), m_to_sign(t_to_sign),
	m_to_execute(t_to_execute)
{
	this->m_signed = false;
	std::cout << "AForm Created\n";
}

AForm::AForm(const AForm &t_obj) : m_name("default"), m_to_sign(42),
	m_to_execute(42)
{
	*this = t_obj;
}

AForm &AForm::operator=(const AForm &t_obj)
{
	if (this != &t_obj)
		this->m_signed = t_obj.getSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const AForm &t_obj)
{
	t_obj.getSigned() ? out << "Signed" : out << "Unsigned";
	return (out << "\nAForm Name: " << t_obj.getName() << "\n Grade Sign: " << t_obj.getToSign() << "\n Grade Execute: " << t_obj.getToExecute() << "\n");
}

AForm::~AForm()
{
	std::cout << "AForm destroy\n";
}

std::string AForm::getName(void) const
{
	return (this->m_name);
}

bool AForm::getSigned(void) const
{
	return (this->m_signed);
}

short int AForm::getToSign(void) const
{
	return (this->m_to_sign);
}

short int AForm::getToExecute(void) const
{
	return (this->m_to_execute);
}

bool	AForm::beSigned(Bureaucrat &t_bureaucrat)
{
	if (!this->m_signed && t_bureaucrat.getGrade() <= this->m_to_sign)
	{
		this->m_signed = true;
		return (true);
	}
	else
		throw AForm::GradeTooLowException();
	return (false);
}

const char *	AForm::GradeTooHighException::what() const throw() 
{
	return ("The grade is to high");
}

const char *	AForm::GradeTooLowException::what() const throw() 
{
	return ("The grade is to low");
}
