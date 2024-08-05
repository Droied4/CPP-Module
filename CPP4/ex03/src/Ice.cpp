/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:26:38 by deordone          #+#    #+#             */
/*   Updated: 2024/08/05 19:12:37 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria::AMateria("ice")
{
        this->_type = AMateria::getType();
        std::cout << "Ice Constructor Called" << std::endl;
}

Ice::Ice( const Ice &obj ) : AMateria::AMateria(obj)
{
        *this = obj;
}

Ice &Ice::operator=( const Ice &obj )
{
        if (this != &obj)
                this->_type = obj.getType();
        return (*this);
}

Ice::~Ice()
{
        std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone( void ) const
{
	Ice *obj = new Ice;
	return (obj);
}

void    use(ICharacter &target)
{
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
