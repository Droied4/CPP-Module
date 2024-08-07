/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:29:30 by deordone          #+#    #+#             */
/*   Updated: 2024/08/07 11:18:38 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap &obj );
		FragTrap &operator=( const FragTrap &obj );
		~FragTrap();

		void	highFivesGuys( void );
};

#endif /* FRAGTRAP_HPP */
