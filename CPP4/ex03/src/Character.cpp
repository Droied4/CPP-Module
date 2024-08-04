/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:00:17 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 23:39:35 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name )
{
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	std::cout << "Character Constructor Called" << std::endl;
}

Character::Character( Const Character &obj )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
	}
}

Character &Character::operator=( Character const &obj )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
	std::cout << "Character Destructor Called" << std::endl;
}

std::string Character::getName( void ) const
{
	return (this->_name);
}

AMateria Character::getInventory( int idx ) const
{
	return (this->_inventory[idx]);
}

void	Character::equip( AMateria *m )
{
	if (!m)
	{
		std::cout << "Nothing to equip" << std::endl;
		return ;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = *m;
			std::cout << this->_name << " equiped " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "The inventory is full" << std::endl;
}

void Character::unequip ( int idx )
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx] = 0;
		std::cout << this->_name << " unequiped " << this->_inventory[idx]->getType() << std::endl;
		return ;
	}
	std::cout << "You cannot unequipe in the position " << idx << std::endl;
}

void Character::use ( int idx, ICharacter &target )
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		std::cout << this->_name << this->_inventory[idx]->use(target) << std::endl;
		return ;
	}
	std::cout << "Nothing to use" << std::endl;
}
