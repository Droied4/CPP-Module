/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:52:23 by deordone          #+#    #+#             */
/*   Updated: 2025/01/21 23:49:13 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <vector>
# include <cstdio>

typedef std::string string;
typedef std::vector<int> i_vec;
typedef std::vector<string> s_vec;

class RPN
{
	private:
	public:
		RPN();
		RPN(const RPN &t_obj);
		~RPN();
		RPN &operator=(const RPN &t_obj);

		void	perform_operation(s_vec);
};

bool findAllowedChars(std::string str, std::string allowed);

#endif /*RPN_HPP*/
