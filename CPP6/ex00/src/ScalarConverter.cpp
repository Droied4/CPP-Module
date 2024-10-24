/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:24:52 by droied            #+#    #+#             */
/*   Updated: 2024/10/24 13:56:58 by droied           ###   ########.fr       */
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
	/*if (t_type.size() > 1)
	{
		std::cout << "char: impossible\n";
		return ;
	}*/	
	if (t_type.size() == 1 && c < 0)
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
/*	if (t_type.size() > 1 && t_type.find("0123456789") != std::string::npos)
	{
		std::cout << "int: impossible\n";
		return ;
	}	*/ 
	if (t_type.size() == 1 && i < 0)
	{
		std::cout << "int: " << static_cast<int>(t_type.c_str()[0]) << "\n";
		return ;
	}
	std::cout << "int: " << i << "\n";
}

void convertToFloat(std::string t_type)
{
	float f = std::atof(t_type.c_str());
	if (t_type.size() == 1 && f < 0)
	{
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(t_type.c_str()[0]) << "f\n";
		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";
}

void convertToDouble(std::string t_type)
{
	double d = std::atol(t_type.c_str());
	if (t_type.size() == 1 && d < 0)
	{
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(t_type.c_str()[0]) << "\n";
		return ;
	}
	std::cout << "double: " << d << "\n";
}

void ScalarConverter::convert(std::string t_type)
{
	ft_fun ft[] = {&convertToChar, &convertToInt, &convertToFloat, &convertToDouble};
	for (unsigned short s = 0; s < 4; s++)
		(*ft[s])(t_type);
}
