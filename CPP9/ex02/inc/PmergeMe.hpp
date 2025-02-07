/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:26:34 by droied            #+#    #+#             */
/*   Updated: 2025/02/07 11:12:00 by droied           ###   ########.fr       */
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
		template <typename T> void insertPend(T &pend, typename T::iterator prev, int recursion_lvl);	
		template <typename T> void deleteMain(T &c, typename T::iterator prev, int recursion_lvl);

		template <typename T> typename T::iterator recurSearch(T c, int start, int end, typename T::iterator to_search);
		template <typename T> void binarySearch(T &c, T &p, int recursion_lvl);
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
void PmergeMe::insertPend(T &pend, typename T::iterator prev, int recursion_lvl)
{
	for (int a(0); a < (recursion_lvl >> 1); a++)
	{
    	pend.insert(std::pair<unsigned int, unsigned int>(a, prev->second));
		prev--;
	}
}

template <typename T> 
typename T::iterator PmergeMe::recurSearch(T c, int start, int end, typename T::iterator to_search)
{
	typedef typename T::iterator iterator;
	iterator middle(c.begin());
	while (start++ < (end >> 1))
		middle++;
	std::cout << "middle -> "<< middle->second << "\n";
	return (to_search);
}

template <typename T> 
void PmergeMe::binarySearch(T &c, T &p, int recursion_lvl)
{
	typedef typename T::iterator iterator;

	iterator to_search(p.begin());
	iterator found;
	int end = (c.size() / (recursion_lvl >> 1 )) - (recursion_lvl >> 1); 
	//vale ahora el problema es que el numero puede quedar entre valores que no importan 
	//tiene que ir avanzando segun el recursion_lvl/2 y esos son los que debe comprobar.
	//debo entonces calcular cuantos pares de 4 hay 
	// std::cout << "size -> " << c.size() << "\n";
	 std::cout << "end -> "<< end << "\n";
	found = recurSearch(c, 0, end, to_search);	

	//una vez encontrado found debo insertarlo
	std::cout << "Pend stack: \n";
	print(p);

	std::cout << "Main stack: \n";
	print(c);
}

template <typename T>
void PmergeMe::binaryInsertion(T &c, int recursion_lvl)
{
	typedef typename T::iterator iterator;
	if (recursion_lvl == 4)
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
		// std::cout << "Current -> "<< curr->second << "\n";
		// std::cout << "Prev -> "<< prev->second << "\n";
		for (int a(0); a < recursion_lvl; a++)
		{
			curr++;
			if (curr == c.end())
				flag++;	
		}
		odd += 2;
	}
	while(curr != end++);
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
	for (int a(1); a < recursion_lvl; a++)
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
