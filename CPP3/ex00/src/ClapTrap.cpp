/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 00:29:15 by droied            #+#    #+#             */
/*   Updated: 2024/08/07 11:21:35 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "Unamed";
}

ClapTrap::ClapTrap(std::string name )
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap " << this->_name << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
		*this = obj;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
		this->_name = obj.getName();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " Destructor called" << std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints( void ) const 
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage( void ) const 
{
	return (this->_attackDamage);
}

void ClapTrap::attack( const std::string &target )
{
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= amount || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << ", damage!" << std::endl;
	this->_hitPoints -= amount;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap" << this->_name << " is out of energy!";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " being repaired, gaining " << amount << " hit Points!" << std::endl;
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
}
