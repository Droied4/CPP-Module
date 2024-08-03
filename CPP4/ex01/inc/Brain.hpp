/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:49:30 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 01:24:03 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:
		std::string *_ideas;
	public:
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		~Brain();

		std::string	*getIdeas( void );
};

#endif /* BRAIN_HPP */
