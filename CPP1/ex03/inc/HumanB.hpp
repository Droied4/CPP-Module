/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:00:02 by deordone          #+#    #+#             */
/*   Updated: 2024/07/15 01:19:09 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private :
		std::string _name;
		Weapon *_weapon;
	public :
		HumanB(std::string name);
		~HumanB();

		void	attack( void );
		void	setWeapon(Weapon &weapon);
};

#endif /* HUMANB_HPP */
