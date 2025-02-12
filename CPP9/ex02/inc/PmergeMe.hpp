/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:26:34 by droied            #+#    #+#             */
/*   Updated: 2025/02/12 16:52:30 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <cmath>
# include <vector>
# include <deque>

typedef std::vector<unsigned int> vec;
typedef std::deque<unsigned int> deq;

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
		template <typename T> void insertPend(T &pend, typename T::iterator prev, int recursion_lvl);
		template <typename T> void deleteMain(T &c, typename T::iterator prev, int recursion_lvl);
		template <typename T> void addMain(T &c, typename T::iterator found, typename T::iterator num, int recursion_lvl);

		template <typename T> void backRes(T &c, T &r);
		template <typename T> void addRes(T &c, T &r, int recursion_lvl);

		template <typename T> bool checkOdd(T &c, int recursion_lvl);
		template <typename T> typename T::iterator recurSearch(T &c, int start, int end, typename T::iterator &found, typename T::iterator to_search, int recursion_lvl);
		template <typename T> void binarySearch(T &c, T &p, int recursion_lvl);

		template <typename T> void oddElement(T &c, T &p, typename T::iterator prev, int recursion_lvl);
		template <typename T> void binaryInsertion(T &c, int recursion_lvl);	

		//aux
		template <typename T> void print(T &a);
};

template <typename T>
void PmergeMe::deleteMain(T &c, typename T::iterator prev, int recursion_lvl)
{
	typename	T::iterator next = prev;
	for (int a(0); a < (recursion_lvl >> 1); a++)
	{
		next--;
		c.erase(prev);
		prev = next;
	}
}

template <typename T>
void PmergeMe::addMain(T &c, typename T::iterator found, typename T::iterator num, int recursion_lvl)
{
	typedef typename T::iterator iterator;
	T tmp;
	iterator i(c.end());
	i--;
	iterator prev = i;
	int b(c.size());
	iterator a(c.end());
	a--;
	if (recursion_lvl == 4)
		print(c, 2);
	for (; a != found; a--)
		tmp.insert(std::pair<unsigned int, unsigned int>(b--, a->second));
	for (unsigned int it(0); it < tmp.size(); it++)
	{
		i--;
		c.erase(prev);
		prev = i;
	}
	unsigned int index(found->first);
	for (int a(0); a < (recursion_lvl >> 1); a++)
	{
    	c.insert(std::pair<unsigned int, unsigned int>(++index, num->second));
		num++;
	}
	iterator n(tmp.begin());
	for (unsigned int a(0); a < tmp.size(); a++)
	{
		c.insert(std::pair<unsigned int, unsigned int>(++index, n->second));
		n++;
	}
}


template <typename T>
void PmergeMe::insertPend(T &pend, typename T::iterator curr, int recursion_lvl)
{
	for (int a(0); a < (recursion_lvl >> 1); a++)
	{
		pend.push_back(*curr);
		curr--;
	}
}

template <typename T> 
typename T::iterator PmergeMe::recurSearch(T &c, int start, int end, typename T::iterator &found, typename T::iterator to_search, int recursion_lvl)
{
	typedef typename T::iterator iterator;
	
	iterator mid(c.begin());
	if (end - start <= (recursion_lvl >> 1))
		return (found);
	while (start <= (end >> 1))
	{
		for (int a(0); a < (recursion_lvl >> 1); a++)
			mid++;
		start += recursion_lvl >> 1;
	}
	mid--;
	found = mid;
	std::cout << start << "\n";
	if (mid->second == to_search->second)
		return (found);
	else if (mid->second > to_search->second)
		return (recurSearch(c, start, end, found, to_search, recursion_lvl));
	else
		return (recurSearch(c, start, end, found, to_search, recursion_lvl));
	return (found);
}

template <typename T> 
void PmergeMe::binarySearch(T &c, T &p, int recursion_lvl)
{
	typedef typename T::iterator iterator;

	iterator to_search(p.begin());
	iterator found(c.begin());
	int end = ((c.size() / (recursion_lvl >> 1)) - 1) * (recursion_lvl >> 1);
	for (int a(1); a < (recursion_lvl >> 1) ; a++)
		++to_search;
	recurSearch(c, 0, end, found, to_search, recursion_lvl);	
	for (int a(1); a < (recursion_lvl >> 1) ; a++)
		--to_search;
	if (recursion_lvl == 4)
		print(p, 2);
	addMain(c, found, to_search, recursion_lvl);
}


template <typename T>
void PmergeMe::oddElement(T &c, T &pend, typename T::iterator prev, int recursion_lvl)
{
	typedef typename T::iterator iterator;

	pend.clear();
	prev = c.end();
	int end = (c.size() / (recursion_lvl >> 1)) - 1;
	end *= (recursion_lvl >> 1);
	end = (c.size() - end) - (recursion_lvl >> 1);
	for (int a(-1); a < end; a++)
		prev--;
	insertPend(pend, prev, recursion_lvl);
	deleteMain(c, prev, recursion_lvl);
	iterator to_search(pend.begin());
	iterator found(c.begin());
	for (int a(1); a < (recursion_lvl >> 1) ; a++)
		++to_search;
	end = (c.size() / (recursion_lvl >> 1)) * (recursion_lvl >> 1);
	recurSearch(c, 0, end, found, to_search, recursion_lvl);	
	for (int a(1); a < (recursion_lvl >> 1) ; a++)
		--to_search;
	addMain(c, found, to_search, recursion_lvl);
}

template <typename T>
bool PmergeMe::checkOdd(T &c, int recursion_lvl)
{
	int i(c.size() / (recursion_lvl >> 1));
	if (i % 2 != 0)
		return (true);
	return (false);
}


template <typename T>
void PmergeMe::addRes(T &c, T &r, int recursion_lvl)
{
	typename T::iterator curr(c.begin());
	int posible_pair = c.size() / (recursion_lvl >> 1);
	int total_number_pair = posible_pair * (recursion_lvl >> 1);
	int res = (int)c.size() - total_number_pair;
	
	std::advance(curr, total_number_pair);
	for (int i(0); i < res; i++)
	{
		r.push_back(*curr);
		curr++;
	}
	//aqui eliminas lo que hay en main
	for (int i(0); i < res; res--)
		c.erase(c.begin() + res);
}

template <typename T>
void PmergeMe::backRes(T &c, T &r)
{
	typename T::iterator curr(c.begin());
	for (unsigned int i(0); i < r.size(); i++)
	{
		c.push_back(*curr);
		curr++;
	}
}

template <typename T>
void PmergeMe::binaryInsertion(T &c, int recursion_lvl)
{
	// typedef typename T::iterator iterator;
	if (recursion_lvl == 0)
		return ;
	if (((int)c.size() - recursion_lvl) < (recursion_lvl >> 1))
		binaryInsertion(c, recursion_lvl >> 1);
	//containers
	T pend;
	T odd;
	T res;
	//iterators
	// iterator curr(c.begin() + (recursion_lvl >> 1) - 1);
	res.clear();
	addRes(c, res, recursion_lvl);

	backRes(c, res);
		
	//antes de acabar la recursion debes volver a agregar los elementos de res en el main
	print(res);
	// iterator prev(c.begin());
	/*
	if (recursion_lvl == 8)
		return ;
	T pend;
	iterator curr(c.begin());
	iterator prev;
	iterator end = c.end();
	end--;
	for (int a(1); a < recursion_lvl; a++)
		curr++;
	int odd(1);
	int flag(0);
	do
	{
		prev = my_prev<T>(curr, (recursion_lvl >> 1));
		if (odd != 1 && flag == 0 && odd % 2 != 0)
		{
			insertPend(pend, prev, recursion_lvl);
			deleteMain(c, prev, recursion_lvl);
			binarySearch(c, pend, recursion_lvl);
		}
		for (int a(0); a < recursion_lvl; a++)
		{
			curr++;
			if (curr == c.end())
				flag++;	
		}
		odd += 2;
	}
	while(curr != end++);
	if (checkOdd(c, recursion_lvl))
		oddElement(c, pend, prev, recursion_lvl);
	binaryInsertion(c, recursion_lvl >> 1);
	*/
}

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
		std::swap(*curr, *prev);
		curr--;
		prev--;
	}
}

template <typename T> 
int PmergeMe::pairSort(T &c, int recursion_lvl)
{
	typedef typename T::iterator iterator;
	if ((unsigned int)(recursion_lvl << 1) > c.size())
		return (recursion_lvl);
	bool curr_exist = true;
	iterator curr(c.begin());
	for (int i(0); i < recursion_lvl - 1; i++)
	{
		if (curr++ == c.end())
			curr_exist = false;
	}
	iterator prev;
	for (unsigned int i(0); i < c.size(); i += recursion_lvl)
	{
		prev = my_prev<T>(curr, (recursion_lvl >> 1));
		if (curr_exist && *prev > *curr)
			my_swap(c, curr, recursion_lvl);
		for (int a(0); a < recursion_lvl; a++)
		{
			if (curr++ == c.end())
				curr_exist = false;
		}
	}
	return (pairSort(c, recursion_lvl << 1));
}

template <typename T> 
void PmergeMe::insertValue(std::string input, T &container)
{
	unsigned int num;
	std::stringstream ss(input);
	while (ss >> num)
		container.push_back(num);
}

template <typename T> 
void PmergeMe::print(T &a)
{
    for (typename T::iterator it(a.begin()); it != a.end(); ++it) 
		std::cout << *it << " ";
	std::cout << "\n";
}

#endif //PMERGEME_HPP 
