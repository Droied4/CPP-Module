/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:27:26 by deordone          #+#    #+#             */
/*   Updated: 2024/08/06 15:55:09 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Cure::Cure() : AMateria::AMateria("cure")
{
        this->_type = AMateria::getType();
        std::cout << "Cure Constructor Called" << std::endl;
}

Cure::Cure( const Cure &obj ) : AMateria::AMateria(obj)
{
        *this = obj;
}

Cure &Cure::operator=( const Cure &obj )
{
        if (this != &obj)
                this->_type = obj.getType();
        return (*this);
}

Cure::~Cure()
{
        std::cout << "Cure destructor called" << std::endl;
}

Cure *Cure::clone ( void ) const
{
	Cure *obj = new Cure;
	return (obj);
}

void    Cure::use(ICharacter &target)
{
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
