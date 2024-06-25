/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:07:48 by droied            #+#    #+#             */
/*   Updated: 2024/06/25 02:11:18 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Zombie 
{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		
		void	announce( void );
		Zombie *newZombie( std::string name );
		void	randomChump( std::string name );
};

