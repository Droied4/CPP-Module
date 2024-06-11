/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:39:27 by deordone          #+#    #+#             */
/*   Updated: 2024/06/11 16:04:26 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBookClasses.h"

Contact::Contact(void)
{
        std::cout << "Constructor Called 🔨" << std::endl;
        return ;
}

Contact::~Contact(void)
{
        std::cout << "Destructor Called 💥" << std::endl;
        return ;

