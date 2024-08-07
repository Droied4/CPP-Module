/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droied <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:26:07 by droied            #+#    #+#             */
/*   Updated: 2024/07/16 23:31:43 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FtFile.hpp"

int main ( void )
{
	FtFile file;
	std::string line;

	file.openReadfile();
	file.openWritefile("new.txt");
	line = file.occurrence();
	file.transcribe(line);
	file.closeFiles();
	return (0);
}
