/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:28:06 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:45:47 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal 
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);
		virtual ~AAnimal() = 0;

		AAnimal(const std::string type);
	
		virtual std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif /* AANIMAL_HPP */
