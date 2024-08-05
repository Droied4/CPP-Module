/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 20:29:07 by deordone          #+#    #+#             */
/*   Updated: 2024/08/05 19:10:52 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string 	_name;
		AMateria 	*_inventory[4];
	public:
		Character( std::string name );
		Character( const Character &obj );
		Character &operator=( const Character &obj );
		~Character();
		
		std::string	const &getName( void ) const;
		AMateria	*getInventory( int idx ) const;
		void		equip( AMateria *m );
		void		unequip( int idx );
		void		use( int idx, ICharacter &target );
};

#endif /* CHARACTER_HPP */
