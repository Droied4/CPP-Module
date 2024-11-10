/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:14:57 by deordone          #+#    #+#             */
/*   Updated: 2024/10/30 17:02:08 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"
#include <vector>
#include <list>

int main(void)
{
	{
		std::cout << "Vector Test\n";
		std::vector<int> vec;
		try
		{
			easyfind(vec, 42);
			vec.push_back(42);
			easyfind(vec, 42);
			vec.push_back(24);
			easyfind(vec, 42);
			std::cout << "Test passed :D\n";
		}
		catch (std::exception &e) 
		{
			std::cout << e.what() << "\n";
		}
	}
	{
		std::cout << "List Test\n";
		std::list<int> lst;
		try
		{
			easyfind(lst, 42);
			lst.push_back(42);
			easyfind(lst, 42);
			lst.push_back(24);
			easyfind(lst, 42);
			std::cout << "Test passed :D\n";
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
	}
	return (0);
}
