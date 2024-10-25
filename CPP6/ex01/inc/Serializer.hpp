/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:18:19 by droied            #+#    #+#             */
/*   Updated: 2024/10/25 12:45:54 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <stdint.h>

typedef struct s_data
{
	std::string nombre;
    int  		edad;
}	Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &t_obj);
		Serializer &operator=(const Serializer &t_obj);
		~Serializer();
	public:
		static uintptr_t serialize(Data *t_ptr);
		static Data *deserialize(uintptr_t t_raw);
};

#endif //SERIALIZER_HPP
