/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:57:03 by droied            #+#    #+#             */
/*   Updated: 2024/11/01 22:45:47 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : m_vec(std::vector<unsigned int>)
{
	m_vec.reserve(0);
}

Span::Span(unsigned int t_n) : m_vec(std::vector<unsigned int>)
{
	m_vec.reserve(t_n);	
}

Span::Span(const Span &t_obj)
{
	*this = t_obj;
}

Span::~Span()
{}


