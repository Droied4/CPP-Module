/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 21:51:23 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 23:41:12 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	_inventory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & ref);
		MateriaSource & operator=(MateriaSource const & ref);
		~MateriaSource();
		
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */
