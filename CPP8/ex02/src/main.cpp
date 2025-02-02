/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:52:28 by deordone          #+#    #+#             */
/*   Updated: 2024/11/08 12:24:44 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"
#include <list>

int main (void)
{
	{
		std::cout << "\n[STACK TEST]\n"; 
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\n[LIST TEST]\n"; 
		std::list<int> mlst;
		mlst.push_back(5);
		mlst.push_back(17);
		std::cout << mlst.back() << std::endl;
		mlst.pop_back();
		std::cout << mlst.size() << std::endl;
		mlst.push_back(3);
		mlst.push_back(5);
		mlst.push_back(737);
		//[...]
		mlst.push_back(0);
		std::list<int>::iterator it = mlst.begin();
		std::list<int>::iterator ite = mlst.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return (0);
}
