/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:33:04 by deordone          #+#    #+#             */
/*   Updated: 2024/10/30 15:13:09 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T> 
typename T::const_iterator easyfind(T container, int to_find)
{
	typename T::const_iterator found;
	found = std::find(container.begin(), container.end(), to_find);
	if (found == container.end())
		throw std::runtime_error("Element not found");
	return (found);
}
