/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 00:27:05 by deordone          #+#    #+#             */
/*   Updated: 2024/08/07 11:19:58 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed DiamondTrap"), ScavTrap(), FragTrap()
{
	this->_name = "Unamed Diamond";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;

	std::cout << "Diamond " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	*this = obj;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
		this->_name = obj.ScavTrap::getName();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond " << this->_name << " destructor called" << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << this->_name << " but also " << this->ClapTrap::_name << std::endl;
}

