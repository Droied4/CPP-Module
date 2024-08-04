/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:49:30 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:22:05 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string *_ideas;
	public:
		Brain();
		Brain( Brain &obj);
		Brain &operator=(const Brain &obj);
		~Brain();

		std::string	*getIdeas( void );
};

#endif /* BRAIN_HPP */
