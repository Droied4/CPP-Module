/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:12:19 by droied            #+#    #+#             */
/*   Updated: 2024/06/25 02:15:09 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie::Zombie( void ) {
}

Zombie::~Zombie( void ) {
}

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
