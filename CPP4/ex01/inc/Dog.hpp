/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:06:29 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 01:30:20 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_dogBrain;
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();

		void makeSound( void ) const;
		Brain *getBrain( void ) const;
};

#endif /* DOG_HPP */
