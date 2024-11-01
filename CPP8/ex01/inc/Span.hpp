/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:06:47 by droied            #+#    #+#             */
/*   Updated: 2024/11/01 22:43:30 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span 
{
	private:
		std::vector<unsigned int> m_vec;
	public:
		Span();
		Span(unsigned int t_n);
		Span(const Span &t_obj);
		~Span();

		Span &operator(const Span &t_obj);
		
		void addNumber(unsigned int t_n);
		void shortestSpan();
		void longestSpan();
};

#endif //SPAN_HPP
