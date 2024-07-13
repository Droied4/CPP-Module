/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:43:19 by deordone          #+#    #+#             */
/*   Updated: 2024/07/13 17:45:10 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
	private :
		std::string _type;
	public :
		Weapon();
		~Weapon();
		void	setType( std::strng type );
		const std::string getType( void );
}
