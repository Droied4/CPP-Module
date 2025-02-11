/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:52:23 by deordone          #+#    #+#             */
/*   Updated: 2025/02/11 22:47:01 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <list>
# include <cstdio>

typedef std::string string;
typedef std::list<int> i_vec;
typedef std::list<string> s_vec;

class RPN
{
	private:
	public:
		RPN();
		RPN(const RPN &t_obj);
		~RPN();
		RPN &operator=(const RPN &t_obj);

		void	perform_operation(s_vec &cont);
};

bool findAllowedChars(std::string str, std::string allowed);
void stoi_vec(s_vec str, i_vec &cont);

#endif /*RPN_HPP*/
