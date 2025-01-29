/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:26:34 by droied            #+#    #+#             */
/*   Updated: 2025/01/29 18:08:48 by droied           ###   ########.fr       */
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

		//aux
		template <typename T> void print(T &a);
};

template <typename T> 
void swap(T &c, typename T::iterator pos)
{
	
}

template <typename T> 
void part1(T &c)
{
	typedef typename T::iterator iterator;
	unsigned int max_pairs(0);
	max_pairs = c.size() / 2;
	if (max_pairs < 2)
		return ;

	iterator it(c.begin());
	for (unsigned int i(0); i < max_pairs; i++)
	{
		if (*it > *(it++))
			swap(c, it);
		it += 2;
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
