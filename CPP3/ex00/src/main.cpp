/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:13:32 by deordone          #+#    #+#             */
/*   Updated: 2024/07/19 20:10:28 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap Hal("Hal");
	
	Hal.attack("Eli");	
	Hal.attack("Tito");	
	Hal.attack("Tuta");	
	Hal.attack("Elias");	
	Hal.attack("Tony");	
	Hal.attack("Nasayami");	
	Hal.attack("Hypathia");
	Hal.attack("Chihiro");	
	Hal.takeDamage(2);
	Hal.beRepaired(2);
	Hal.attack("Fletcher");
	Hal.attack("a");
	Hal.takeDamage(8);
	Hal.takeDamage(2);
	return (0);
}
