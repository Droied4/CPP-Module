/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:57:03 by droied            #+#    #+#             */
/*   Updated: 2024/11/05 11:50:08 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : m_vec(), m_size(0)
{
	m_vec.reserve(m_size);
	std::cout << "Span created with " << m_size << " spaces availables\n"; 
}

Span::Span(unsigned int t_n) : m_vec(), m_size(t_n)
{
	m_vec.reserve(m_size);
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
	if (m_vec.size() < m_size)
		m_vec.push_back(t_n);
	else
		throw std::overflow_error("Span is already full");
}

void Span::addManyNumbers()
{
	for(unsigned long i(0); i < m_size; i++)
		this->m_vec.push_back(std::rand() % 90000);
}

unsigned int Span::shortestSpan()
{
	if (m_vec.size() <= 1)
		throw std::underflow_error("Not enough elements for shortestSpan");
	size_t r;
	size_t d;
	r = 0;
	d = std::numeric_limits<size_t>::max();
	std::sort(m_vec.begin(), m_vec.end());
	for(unsigned long i(0); i < m_vec.size(); i++)
	{
		if (m_vec[i + 1] && m_vec[i] > m_vec[i + 1])
			r = m_vec[i] - m_vec[i + 1];
		else if (m_vec[i + 1] && m_vec[i] < m_vec[i + 1])
			r = m_vec[i + 1] - m_vec[i];
		if (d > r)
			d = r;
	}
	return (d);
}

unsigned int Span::longestSpan()
{
	if (m_vec.size() <= 1)
		throw std::underflow_error("Not enough elements for longestSpan");
	return (*max_element(m_vec.begin(), m_vec.end()) - *min_element(m_vec.begin(), m_vec.end()));
}

std::vector<unsigned int> Span::getVec() const
{
	return (this->m_vec);
}

unsigned int Span::getSize() const
{
	return (this->m_size);
}
