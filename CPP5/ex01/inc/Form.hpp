/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:15:28 by deordone          #+#    #+#             */
/*   Updated: 2024/10/11 15:18:22 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form {
	private:
		std::string	m_name;
		bool		m_signed;
		short int	m_to_sign;
		short int	m_to_execute;
	public:
		Form();
		Form(std::string t_name, short int t_to_sign);
		Form(const Form &t_obj);
		Form &operator=(const Form &t_obj);
		~Form();
};

#endif // FORM_HPP
