/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:51:30 by droied            #+#    #+#             */
/*   Updated: 2024/07/12 00:58:52 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	if (N < 0)
		return (NULL);

	int num(0);	
	Zombie horde[N];
	Zombie newZombito;

	while (num < N)
	{
		newZombito = new Zombie(name);
		horde += newZombito;
		num++;
	}
	return (horde);
}
