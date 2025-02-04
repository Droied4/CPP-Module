/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:26:34 by droied            #+#    #+#             */
/*   Updated: 2025/02/04 13:54:27 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <cmath>
# include <list>
# include <map>

typedef std::map<unsigned int, unsigned int> map;
typedef std::multimap<unsigned int, unsigned int> mmap;

class PmergeMe 
{
	private:
		template <typename T> void swap(T &c, typename T::iterator pos);
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &obj);
		PmergeMe &operator=(const PmergeMe &obj);
		~PmergeMe();

		template <typename T> void insertValue(std::string input, T &container);
		template <typename T> void pairSort(T &c, int recursion_lvl);	
		template <typename T> void my_swap(T &c, typename T::iterator pos, int recursion_lvl);	
		template <typename T> typename T::iterator my_prev(typename T::iterator pos, int recursion_lvl);	

		//aux
		template <typename T> void print(T &a);
};

template <typename T>
typename T::iterator PmergeMe::my_prev(typename T::iterator pos, int recursion_lvl)
{
	for (int a(0); a < recursion_lvl; a++)
		pos--;
	return (pos);
}

template <typename T> 
void PmergeMe::my_swap(T &c, typename T::iterator pos, int recursion_lvl)
{
	(void)c;
	typedef typename T::iterator iterator;
	iterator prev;
	iterator curr = pos;
	prev = my_prev<T>(curr, recursion_lvl - 1);
	for (int a(0); a < recursion_lvl - 1; a++)
	{
		std::swap(curr->second, prev->second);
		curr--;
		prev--;
	}
	//la idea es hacer un swap que dependiendo del nivel de recursion entonces aplique un swap diferente.
	// nivel 1 desplaza 2 valores
	// nivel 2 desplaza 4 valores
	// nivel 3 desplaza 8 valores 
	// nivel 4 desplaza 16 valores etc.
}

template <typename T> 
void PmergeMe::pairSort(T &c, int recursion_lvl)
{
	if (recursion_lvl == 8)
		return ;
	// if (pow(2, recursion_lvl) > c.size() / 2)
		// return ;
	typedef typename T::iterator iterator;
	iterator i(c.begin());
	iterator prev;
	for (int a(0); a < recursion_lvl - 1; a++)
		i++;
	iterator end = c.end();
	end--;
	do 
	{
		prev = my_prev<T>(i, recursion_lvl - 1);
	std::cout << prev->second << " <- prev \n";
	std::cout << i->second << " <- curr \n";
		if (prev->second > i->second)
			my_swap(c, i, recursion_lvl);
		for (int a(0); a < recursion_lvl; a++)
			i++;
	}
	while (i != end++);
	pairSort(c, recursion_lvl << 1);
	//la parte 1 se divide en dos cosas
	//1 dividir elementos en pares
	//2 sortear los pares
	//esto se debe hacer hasta que ya no se puedan hacer mas pares
}

template <typename T> 
void PmergeMe::insertValue(std::string input, T &container)
{
	unsigned int num;
	unsigned int i(0);
	std::stringstream ss(input);
	while (ss >> num)
    	container.insert(std::pair<unsigned int, unsigned int>(i++, num));
}

template <typename T> 
void PmergeMe::print(T &a)
{
    for (typename T::iterator it(a.begin()); it != a.end(); ++it) 
        std::cout << it->second << " ";
    std::cout << "\n";
}

#endif //PMERGEME_HPP 
