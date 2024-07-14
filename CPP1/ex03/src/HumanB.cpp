/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:29:08 by deordone          #+#    #+#             */
/*   Updated: 2024/07/15 01:18:52 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB( void ){
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}

void HumanB::attack( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
