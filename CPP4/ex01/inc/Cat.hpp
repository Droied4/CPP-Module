/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 03:25:50 by deordone          #+#    #+#             */
/*   Updated: 2024/08/02 14:01:09 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *_catIdeas;
	public:
		Cat();
		Cat( const Cat &obj );
		Cat &operator=( const Cat &obj );
		~Cat();

		void makeSound( void ) const;
};

#endif /* CAT_HPP */
