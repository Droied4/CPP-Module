/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:54:48 by deordone          #+#    #+#             */
/*   Updated: 2024/11/08 12:15:34 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>

template<typename T>
MutantStack<T>::MutantStack()
{}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &t_obj) : std::stack<T>(t_obj)
{}

template<typename T>
MutantStack<T>::~MutantStack()
{}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &t_obj)
{
	if (this != &t_obj)
	{
		//norminette and also i dont understand why in the subject doesn't especify 
		//that the ortodoxal cannical form it is not necessary here but anyways
	}
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}
