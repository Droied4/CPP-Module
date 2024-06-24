/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:31:25 by deordone          #+#    #+#             */
/*   Updated: 2024/06/24 10:23:03 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	private:
		int			_index;
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;

		std::string _getInfo(std::string str) const;
	public:
		Contact(void);
		~Contact(void);

		std::string	getContactInfo(int i);
		int			getIndex(void);
		void		setIndex(int i);
		bool 		infoExist(void);
		void		init(void);
};

#endif
