/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:08:45 by deordone          #+#    #+#             */
/*   Updated: 2024/08/05 19:14:58 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const &type )
{
	this->_type = type;
	std::cout << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria( const AMateria &obj )
{
	*this = obj;
}

AMateria &AMateria::operator=( const AMateria &obj )
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType( void ) const
{
	return (this->_type);
}

void	use(ICharacter &target)
{
	std::cout << "* Nothing happen to " << target.getName() << " *" << std::endl;
}
