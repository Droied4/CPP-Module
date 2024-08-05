/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:43:09 by deordone          #+#    #+#             */
/*   Updated: 2024/08/05 19:15:30 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = 0;	
	std::cout << "MateriaSource Constructor Called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	*this = obj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
		this->_inventory = obj->_inventory;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor Called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (size_t i = 0; i < 4; i++) 
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			std::cout << "Materia Learned" << std::endl;
			return ;
		}
	}
	std::cout << "Materia Source can't learn more materias" << std::endl;
}

AMateria *createMateria(std::string const &type)
{
	for (size_t i = 0; i < 4; i++) 
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() != type)
		{
			std::cout << type << " Materia Created" << std::endl;
			return ((this->_inventory[i])->clone());
		}
	}
	std::cout << type << " materia does not exit\n";
	return (0);
}
