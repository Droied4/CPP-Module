/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:37:21 by deordone          #+#    #+#             */
/*   Updated: 2024/06/11 15:40:54 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBookClasses.h"

Phone::Phone(void)
{
	std::cout << "Constructor Called 🔨" << std::endl;
	return ;
}

Phone::~Phone(void)
{
	std::cout << "Destructor Called 💥" << std::endl;
	return ;
}

