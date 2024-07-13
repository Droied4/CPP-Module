/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:03:29 by deordone          #+#    #+#             */
/*   Updated: 2024/07/13 17:23:43 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
	private:
		std::string		_name;
		unsigned int	_n;
	public:
		Zombie();
		~Zombie();
		
		void	announce( void ); 
		void	setName( std::string name );
		Zombie *zombieHorde( int N, std::string name );
};

Zombie *zombieHorde( int N, std::string name );

#endif /* ZOMBIE_HPP */
