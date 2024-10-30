/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:14:57 by deordone          #+#    #+#             */
/*   Updated: 2024/10/30 15:21:26 by deordone         ###   ########.fr       */
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
		easyfind(vec, 42);
		vec.push_back(42);
		easyfind(vec, 42);
		vec.push_back(24);
		easyfind(vec, 42);
	}
/*	{
		std::cout << "List Test\n";
		std::list<int> lst{42} 
		std::list<int> lst2{42} 
		//find
	    flst.assign({ 42 });
		//find
		flst.push_back(24);
		//find
	}*/
	return (0);
}
