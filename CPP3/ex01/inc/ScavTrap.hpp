/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:47:27 by deordone          #+#    #+#             */
/*   Updated: 2024/08/07 11:25:33 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &obj );
		ScavTrap &operator=( const ScavTrap &obj );
		~ScavTrap();

		void	attack( std::string const &target );
		void	guardGate( void );
};

#endif /* SCAVTRAP_HPP */
