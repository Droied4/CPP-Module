/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@32.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:36:53 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 16:34:50 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.
Base * generate(void)
{
	Base *ptr;
	unsigned short random(rand() % 3 + 1);
	if (random == 1)
		ptr = new A;
	else if (random == 2)
		ptr = new B;
	else
		ptr = new C;
	return (ptr);
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The pointer is a A type \n";
	if (dynamic_cast<B *>(p))
		std::cout << "The pointer is a B type\n";
	if (dynamic_cast<C *>(p))
		std::cout << "The pointer is a C type\n";
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
// inside this function is forbidden.
void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Certainly 🍵the reference of p is a A type\n";
	} 
	catch(const std::exception& e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Certainly 🍵the reference of p is a B type\n";
	}
	catch(const std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Certainly 🍵the reference of p is a C type\n";
	}
	catch(const std::exception &e) {}
}

int main (void)
{	
	Base *case1 = generate();
	Base *case2 = generate();
	Base *case3 = generate();
	{
		std::cout << "Pointer Function Test\n";
		identify(case1);
		identify(case2);
		identify(case3);
	}
	{
		std::cout << "Reference Function Test\n";
		identify(*case1);
		identify(*case2);
		identify(*case3);
	}
	delete(case1);
	delete(case2);
	delete(case3);
}
