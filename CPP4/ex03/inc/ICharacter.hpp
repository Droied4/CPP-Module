/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:30:50 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 20:34:04 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter();
		Virtual std::string const &getName() const = 0;
		virtual void equip( AMateria *m ) = 0;
		virtual void unequip( int dx ) = 0;
		virtual void use( int dx, ICharacter &target ) = 0;
};

#endif /* ICHARACTER_HPP */
