/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:36:53 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 13:55:13 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.
Base * generate(void);

//It prints the actual type of the object pointed to by p: "A", "B" or "C".
void identify(Base* p)
{
	std::cout << p << "\n";
	std::cout << sizeof(p) << "\n";
}

//It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
// inside this function is forbidden.
void identify(Base& p);

int main (void)
{
	Base *ptra = new A;
	Base *ptrb = new B;
	Base *ptrc = new C;

	identify(ptra);
	identify(ptrb);
	identify(ptrc);
}
