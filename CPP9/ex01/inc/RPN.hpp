/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:52:23 by deordone          #+#    #+#             */
/*   Updated: 2025/01/15 18:14:10 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <vector>
# include <cstdio>

typedef std::vector<int> i_vec;
typedef std::vector<std::string> s_vec;

class RPN
{
	private:
		s_vec	input;			

		bool	parse(s_vec input);
		bool	isNumber(char);
	public:
		
};

#endif /*RPN_HPP*/
