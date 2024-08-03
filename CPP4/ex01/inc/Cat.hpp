/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:25:50 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 01:33:32 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_catBrain;
	public:
		Cat();
		Cat( const Cat &obj );
		Cat &operator=( const Cat &obj );
		~Cat();

		void makeSound( void ) const;
		Brain *getBrain( void ) const;
};

#endif /* CAT_HPP */
