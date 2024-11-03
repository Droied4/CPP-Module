/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:06:47 by droied            #+#    #+#             */
/*   Updated: 2024/11/03 17:35:33 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

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
		void shortestSpan();
		void longestSpan();
};

#endif //SPAN_HPP
