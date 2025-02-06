/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:26:34 by droied            #+#    #+#             */
/*   Updated: 2025/02/06 15:09:38 by droied           ###   ########.fr       */
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
		template <typename T> void my_swap(T &c, typename T::iterator pos, int recursion_lvl);	
		template <typename T> typename T::iterator my_prev(typename T::iterator pos, int recursion_lvl);	
		template <typename T> int pairSort(T &c, int recursion_lvl);	
		template <typename T> void insertPend(T &c, T &pend);	
		template <typename T> void binaryInsertion(T &c, int recursion_lvl);	

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
	prev = my_prev<T>(curr, (recursion_lvl >> 1));
	for (int a(0); a < (recursion_lvl >> 1); a++)
	{
		std::swap(curr->second, prev->second);
		curr--;
		prev--;
	}
}

// template <typename T>
// void PmergeMe::insertPend(T &c, T &c)
// {}

template <typename T>
void PmergeMe::binaryInsertion(T &c, int recursion_lvl)
{
	typedef typename T::iterator iterator;
	if (recursion_lvl == 4)
		return ;
	iterator curr(c.begin());
	iterator prev;
	iterator end = c.end();
	end--;
	for (int a(1); a < recursion_lvl; a++)
		curr++;
	int odd(1);
	//iteracion mal no deberia agregar el 12 
	do
	{
		prev = my_prev<T>(curr, (recursion_lvl >> 1));
		if (odd != 1 && odd % 2 != 0)
			std::cout << "insert this -> " << prev->second << "\n";
			// insertPend(c, pend);
		// std::cout << "Current -> "<< curr->second << "\n";
		// std::cout << "Prev -> "<< prev->second << "\n";
		for (int a(0); a < recursion_lvl; a++)
			curr++;
		odd += 2;
	}
	while(curr != end++);
	//while
	// insertPend(c, pend); //function insert on pend odd elements. except 1
	// binarySearch(c, pend); //binary search and insert the value in the corresponding place.

	binaryInsertion(c, recursion_lvl >> 1);
}

template <typename T> 
int PmergeMe::pairSort(T &c, int recursion_lvl)
{
	typedef typename T::iterator iterator;
	if ((unsigned int)(recursion_lvl << 1) > c.size())
		return (recursion_lvl);
	iterator i(c.begin());
	iterator prev;
	for (int a(0); a < recursion_lvl - 1; a++)
		i++;
	iterator end = c.end();
	end--;
	do 
	{
		prev = my_prev<T>(i, (recursion_lvl >> 1));
		if (prev->second > i->second)
			my_swap(c, i, recursion_lvl);
		for (int a(0); a < recursion_lvl; a++)
			i++;
	}
	while (i != end++);
	return (pairSort(c, recursion_lvl << 1));
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
