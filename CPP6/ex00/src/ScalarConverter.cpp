/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:24:52 by droied            #+#    #+#             */
/*   Updated: 2024/10/24 13:06:05 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &t_obj)
{
	*this = t_obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &t_obj)
{
	if (this != &t_obj)
		*this = t_obj;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{}

void convertToChar(std::string t_type)
{
	char c = std::atoi(t_type.c_str());
	if (t_type.size() > 1)
	{
		std::cout << "char: impossible\n";
		return ;
	}	
	else if (t_type.size() == 1 && c <= 0)
	{
		std::cout << "char: '" << t_type.c_str()[0] << "'\n";
		return ;
	}
	if (c >= 32 && c <= 126)
		std::cout << "char: '" << c << "'\n";
	else
		std::cout << "char: Non displayable\n";
}

void convertToInt(std::string t_type)
{
	int i = std::atoi(t_type.c_str());
	if (t_type.size() > 1)
	{
		std::cout << "int: impossible\n";
		return ;
	}	
	if (t_type.size() == 1 && i <= 0)
	{
		std::cout << "int: " << static_cast<int>(t_type.c_str()[0]) << "\n";
		return ;
	}
	std::cout << "int: " << i << "\n";
}

void convertToFloat(std::string t_type)
{
	std::cout << "float: " << t_type << "\n";
}

void convertToDouble(std::string t_type)
{
	std::cout << "double: " << t_type << "\n";
}

void ScalarConverter::convert(std::string t_type)
{
	ft_fun ft[] = {&convertToChar, &convertToInt, &convertToFloat, &convertToDouble};
	for (unsigned short s = 0; s < 4; s++)
		(*ft[s])(t_type);
}
