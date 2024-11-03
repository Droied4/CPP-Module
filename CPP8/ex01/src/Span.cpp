/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:57:03 by droied            #+#    #+#             */
/*   Updated: 2024/11/03 17:36:28 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : m_vec(), m_size(0)
{
	this->m_vec.reserve(m_size);
	std::cout << "Span created with " << m_size << " spaces availables\n"; 
}

Span::Span(unsigned int t_n) : m_vec(), m_size(t_n)
{
	this->m_vec.reserve(m_size);
	std::cout << "Span created with " << m_size << " spaces availables\n"; 
}

Span::Span(const Span &t_obj)
{
	*this = t_obj;
}

Span::~Span()
{}

Span &Span::operator=(const Span &t_obj)
{
	if (this != &t_obj)
	{
		this->m_vec = t_obj.getVec();
		this->m_size = t_obj.getSize();
	}
	return (*this);
}

void Span::addNumber(int t_n)
{
	if (this->m_vec.size() < this->m_size)
		this->m_vec.push_back(t_n);
	else
		throw std::overflow_error("Span is already full");
}

std::vector<unsigned int> Span::getVec() const
{
	return (this->m_vec);
}

unsigned int Span::getSize() const
{
	return (this->m_size);
}
