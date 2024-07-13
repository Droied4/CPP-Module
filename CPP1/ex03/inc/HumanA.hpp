/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:45:24 by deordone          #+#    #+#             */
/*   Updated: 2024/07/13 18:02:18 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanA {
	private : 
		std::string _name;
		Weapon weapon;
	public :
		HumanA(std::string name, Weapong weapon);
		~HumanA();
		void	attack(std::string name, Weapon weapon);
}
