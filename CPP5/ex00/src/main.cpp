/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:32:55 by droied            #+#    #+#             */
/*   Updated: 2024/10/11 15:11:26 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	std::cout << "\n \033[32m FAIL TEST \033[0m \n";
	Bureaucrat bur1("Tony", 151);
	std::cout << bur1;
	bur1.decreaseGrade(1); 
	std::cout << "\n------------------\n";

	std::cout << "\n \033[32m HOGWARTS TEST \033[0m \n";
	Bureaucrat bur2("Harry Potter", 0);
	std::cout << bur2;
	bur2.decreaseGrade(2);
	std::cout << bur2;
	Bureaucrat bur3("Hermione", 1);
	std::cout << bur3;
	bur3.increaseGrade(1);
	std::cout << bur3;
	bur3.increaseGrade(1);
	std::cout << bur3;
	std::cout << "\n------------------\n";
	return (0);
}
