/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/07/21 00:37:37 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void )
{
	ClapTrap Pika("Pikachu");
	ScavTrap Squirt("Squirtle");
	FragTrap Bull("Bullbasaur");
	DiamondTrap Mew("Mew");

	Mew.attack("Pikachu");
	Mew.attack("Squirtle");
	Mew.attack("Bullbasaur");
	Mew.whoAmI();
	return (0);
}
