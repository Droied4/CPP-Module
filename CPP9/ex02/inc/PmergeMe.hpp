/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:26:34 by droied            #+#    #+#             */
/*   Updated: 2025/02/03 22:57:37 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
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
		template <typename T> void part1(T &c);	
		template <typename T> void my_swap(T &c, typename T::iterator &pos);	
		template <typename T> typename T::iterator my_prev(typename T::iterator &pos);	

		//aux
		template <typename T> void print(T &a);
};

template <typename T>
typename T::iterator PmergeMe::my_prev(typename T::iterator &pos)
{
	typename T::iterator prev;
	prev = pos--;
	return (prev);
}

template <typename T> 
void PmergeMe::my_swap(T &c, typename T::iterator &pos)
{
	(void)c;
	typedef typename T::iterator iterator;
	iterator prev;
	prev = my_prev<T>(pos);
	std::swap(pos->second, prev->second);
	//la idea es hacer un swap que dependiendo del nivel de recursion entonces aplique un swap diferente.
	// nivel 1 desplaza 2 valores
	// nivel 2 desplaza 4 valores
	// nivel 3 desplaza 8 valores 
	// nivel 4 desplaza 16 valores etc.
}

template <typename T> 
void PmergeMe::part1(T &c)
{

	typedef typename T::iterator iterator;
	iterator it(c.begin());
	iterator prev;
	it++;
	while (it != c.end())
	{
		prev = my_prev<T>(it);
		if (prev->second > it->second)
			my_swap(c, it);
		it++;
	}

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
