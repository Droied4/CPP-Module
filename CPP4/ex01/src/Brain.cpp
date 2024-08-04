/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:53:56 by deordone          #+#    #+#             */
/*   Updated: 2024/08/04 17:21:52 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	this->_ideas = new std::string[100];	
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = ":)"; 
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain( Brain &obj )
{
	std::string *obj_ideas = obj.getIdeas();
	this->_ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = obj_ideas[i];
}

Brain &Brain::operator=( const Brain &obj )
{
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return (*this);
}

Brain::~Brain( void  )
{
	delete[] (this->_ideas);
	std::cout << "Brain Destructor Called" << std::endl;
}

std::string *Brain::getIdeas( void  )
{
	return (this->_ideas);
}
