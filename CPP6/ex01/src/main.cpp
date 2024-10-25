/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:24:24 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 13:15:01 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <cstdlib>

int main (void)
{
	Data ptr;
	Data *same_ptr;
	std::cout << "Original ptr -> "<< &ptr << "\n";
	uintptr_t keep = Serializer::serialize(&ptr);
	std::cout << "serialize result -> "<< keep << "\n";
	same_ptr = Serializer::deserialize(keep);
	std::cout << "deserialize result -> "<< same_ptr << "\n";
	return (0);
}
