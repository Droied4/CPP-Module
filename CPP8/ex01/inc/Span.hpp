/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:06:47 by droied            #+#    #+#             */
/*   Updated: 2024/11/05 11:37:49 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <bits/stdc++.h>
# include <limits>

class Span 
{
	private:
		std::vector<unsigned int> 	m_vec;
		unsigned int				m_size;
	public:
		Span();
		Span(unsigned int t_n);
		Span(const Span &t_obj);
		~Span();

		Span &operator=(const Span &t_obj);
		std::vector<unsigned int> 	getVec() const;
		unsigned int 				getSize() const;
		
		
		void addNumber(int t_n); 
		void addManyNumbers();
		unsigned int shortestSpan();
		unsigned int longestSpan();
};

#endif //SPAN_HPP
