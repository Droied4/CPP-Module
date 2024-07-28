/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 11:36:58 by deordone          #+#    #+#             */
/*   Updated: 2024/07/28 11:41:23 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator=(const WrongAnimal &obj);
		~WrongAnimal();

		void	makeSound( void );
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &obj);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat();

		void	makeSound( void );
};



#endif /* WRONGANIMAL_HPP */
