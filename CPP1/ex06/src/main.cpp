/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 01:10:14 by droied            #+#    #+#             */
/*   Updated: 2024/07/17 01:44:11 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ( int ac, char *av[] )
{
	Harl 		harl;

	if (ac >= 2)
	{
		harl.complain(av[1]);
	}
	return (0);
}
