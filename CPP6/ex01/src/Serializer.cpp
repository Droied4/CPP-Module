/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:24:52 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 13:10:46 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{}

Serializer::Serializer(const Serializer &t_obj)
{
	*this = t_obj;
}

Serializer &Serializer::operator=(const Serializer &t_obj)
{
	if (this != &t_obj)
		*this = t_obj;
	return (*this);
}

Serializer::~Serializer()
{}

uintptr_t Serializer::serialize(Data *t_ptr)
{	
	uintptr_t s = reinterpret_cast<uintptr_t>(t_ptr);
	return (s);
}

Data *Serializer::deserialize(uintptr_t t_raw)
{	
	Data *r = reinterpret_cast<Data *>(t_raw);
	return (r);
}

