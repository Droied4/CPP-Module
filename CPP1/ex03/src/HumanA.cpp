/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:25:06 by deordone          #+#    #+#             */
/*   Updated: 2024/07/15 01:18:23 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) 
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA( void ) {
}

void HumanA::attack ( void )
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
