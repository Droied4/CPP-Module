/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:07:48 by droied            #+#    #+#             */
/*   Updated: 2024/07/11 21:12:53 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie 
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		
		void	announce( void ); 
		Zombie* newZombie( std::string name );
    	void    randomChump( std::string name );
};

Zombie *newZombie( std::string name );
void	randomChump( std::string name );

#endif /* ZOMBIE_HPP */
