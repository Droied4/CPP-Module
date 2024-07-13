/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:00:02 by deordone          #+#    #+#             */
/*   Updated: 2024/07/13 18:01:48 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class HumanB {
	private :
		std::string _name;
		Weapon weapon;
	public :
		HumanB(std::string name);
		~HumanB();
		void	attack(std::string name, weapon);
}
