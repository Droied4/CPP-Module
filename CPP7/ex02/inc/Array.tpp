/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:22:26 by deordone          #+#    #+#             */
/*   Updated: 2024/10/30 09:56:02 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : m_array(new T[0]), m_size(0)
{
	std::cout << "Default Array Created with " << m_size << " spaces\n";
}

template<typename T>
Array<T>::Array(unsigned int n) : m_size(n)
{
	this->m_array = new T[m_size];
	for(unsigned int i(0); i < m_size; i++)
		m_array[i] = 0;
	std::cout << "Array Created with " << m_size << " spaces\n";
}
 
template<typename T>
Array<T>::Array(const Array<T> &t_obj)
{
	*this = t_obj;
}

template<typename T>
Array<T>::~Array()
{
	delete[] (this->m_array);
	std::cout << "Array Destroy\n";
}

template<typename T>
T &Array<T>::operator[](unsigned int idx)
{
	if (idx < 0 || idx >= this->m_size)
		throw std::out_of_range("The index is outbounds ");
	return(this->m_array[idx]);
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &t_obj)
{
	std::cout << "Copy assignment Array\n";
	if (this != &t_obj)
	{
		delete[] (this->m_array);
		this->m_size = t_obj.size();
		this->m_array = new T[t_obj.size()];
		for (unsigned int i = 0; i < t_obj.size(); i++)
			this->m_array[i] = t_obj.m_array[i];
	}
	return (*this);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return(this->m_size);
}

