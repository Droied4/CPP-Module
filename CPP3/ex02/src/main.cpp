/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/07/20 23:43:19 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void )
{
	ClapTrap Pika("Pikachu");
	ScavTrap Squirt("Squirtle");
	FragTrap Bull("Bullbasaur");
	
	Pika.attack("Squirtle");
	Squirt.takeDamage(0);
	Pika.attack("Bullbasaur");
	Bull.takeDamage(0);
	Squirt.attack("Pikachu");
	Pika.takeDamage(20);
	Squirt.guardGate();
	Bull.attack("Squirtle");
	Squirt.takeDamage(30);
	Bull.highFivesGuys();
	return (0);
}
