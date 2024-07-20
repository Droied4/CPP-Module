/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/07/20 23:27:04 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
	ClapTrap Pika("Pikachu");
	ScavTrap Squirt("Squirtle");
	
	Pika.attack("Squirtle");
	Squirt.takeDamage(0);
	Pika.attack("Squirtle");	
	Squirt.takeDamage(0);
	Squirt.attack("Pikachu");
	Pika.takeDamage(20);
	Squirt.guardGate();
	Pika.beRepaired(1);
	return (0);
}
