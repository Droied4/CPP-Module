/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:53:56 by deordone          #+#    #+#             */
/*   Updated: 2024/08/02 14:05:20 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain( const Brain &obj )
{
	*this = obj;
}

Brain &Brain::operator=( const Brain &obj )
{
	if (this != &obj)
		this->_ideas = obj.getIdeas();
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

/* future deivid this sht doesnt work u need to return individual values in a loop
std::string []Brain::getIdeas( void ) const
{
	return (this->_ideas);
}
*/
