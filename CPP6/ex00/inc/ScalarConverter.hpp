/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:14:35 by droied            #+#    #+#             */
/*   Updated: 2024/10/24 13:50:18 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &t_obj);
		ScalarConverter &operator=(const ScalarConverter &t_obj);
		~ScalarConverter();
	public:
		static void convert(std::string t_type);
};

typedef void (*ft_fun)(std::string t_type);

#endif //SCALARCONVERTER_HPP
