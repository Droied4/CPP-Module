/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 00:29:15 by droied            #+#    #+#             */
/*   Updated: 2024/07/19 00:50:00 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name )
{
	this->_name = name;
	std::cout << "Constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName( void ) const
{
	return (this->_name);
}

void ClapTrap::setHitPoints( int hitPoints )
{
	this->_hitPoints = hitPoints;
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << "<damage>" << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{

}

void ClapTrap::beRepaired( unsigned int amount )
{

}
