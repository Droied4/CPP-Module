/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:03:20 by droied            #+#    #+#             */
/*   Updated: 2024/10/30 10:01:50 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main (void)
{
	{
		Array<int> my(4);
		Array<int> yours;
		my[0] = 4;
		try 
		{
			my[-1] = 3;
		} 
		catch(std::exception &e)
		{
			std::cout << e.what() << "\n";
		}
		my[1] = 2;
		yours = my;	
		std::cout << "my -> " << &my << "\n";
		std::cout << "yours -> " << &yours << "\n";
		std::cout << "yours -> " << yours[0] << "\n";
		std::cout << "yours -> " << yours[1] << "\n";
		int n;
		n = my[1];
		std::cout << n << "\n";
	}
	return (0);
}
