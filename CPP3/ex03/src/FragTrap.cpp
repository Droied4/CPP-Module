/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:32:02 by deordone          #+#    #+#             */
/*   Updated: 2024/08/07 11:08:51 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "Unamed FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	
	std::cout << "FragTrap " << this->_name << " Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	*this = obj;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
		this->_name = obj.getName();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if( this->_energyPoints <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy" << std::endl;
		return ;
	}
	std::cout << "High Five :D!!" << std::endl;
}
