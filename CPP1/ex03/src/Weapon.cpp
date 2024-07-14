/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:14:56 by deordone          #+#    #+#             */
/*   Updated: 2024/07/15 01:10:01 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::~Weapon( void ) {
}

void Weapon::setType( std::string type )
{
	this->_type = type;
}

const std::string Weapon::getType( void )
{
	return (this->_type);
}
