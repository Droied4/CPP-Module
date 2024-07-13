/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:43:19 by deordone          #+#    #+#             */
/*   Updated: 2024/07/13 20:32:22 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon 
{
	private :
		std::string _type;
	public :
		Weapon(std::string type);
		~Weapon();
		
		void	setType( std::string type );
		const std::string getType( void );
};

#endif /* WEAPON_HPP */
