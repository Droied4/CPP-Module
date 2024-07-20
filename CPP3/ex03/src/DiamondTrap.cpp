/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:27:05 by deordone          #+#    #+#             */
/*   Updated: 2024/07/21 00:38:20 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;

	std::cout << "Diamond " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond " << this->_name << " destructor called" << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << this->_name << " but also " << this->ClapTrap::_name << std::endl;
}
