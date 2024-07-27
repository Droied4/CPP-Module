/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:54:20 by deordone          #+#    #+#             */
/*   Updated: 2024/07/27 03:39:29 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

# include <iostream>

class Animal 
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		~Animal();

		Animal(const std::string type);
	
		std::string	getType( void ) const;
		void	makeSound( void ) const;
};

#endif /* ANIMAL_HPP */
