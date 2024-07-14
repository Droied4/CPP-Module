/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:45:24 by deordone          #+#    #+#             */
/*   Updated: 2024/07/15 01:17:14 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA 
{
	private : 
		std::string _name;
		Weapon *_weapon;
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();
};

#endif /* HUMANA_HPP */ 
