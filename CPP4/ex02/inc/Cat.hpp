/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:25:50 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:40:37 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_catBrain;
	public:
		Cat();
		Cat( const Cat &obj );
		Cat &operator=( const Cat &obj );
		~Cat();

		void makeSound( void ) const;
		void compareWith( Cat const &other );
		Brain *getBrain( void ) const;
};

#endif /* CAT_HPP */
