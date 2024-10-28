/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:45:07 by droied            #+#    #+#             */
/*   Updated: 2024/10/28 17:32:15 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T				*m_array;
		unsigned int	m_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &t_obj);
		~Array();
		
		Array 	&operator=(const Array &t_obj);
		// T 		&operator[](unsigned int n) const; //• Elements can be accessed through the subscript operator: [ ]. creo que es asi
		T		operator[](unsigned int n) const;
		T 		&operator[](unsigned int n);
		unsigned int size() const; //• returns the number of elements in the array
};

#endif //ARRAY_HPP
