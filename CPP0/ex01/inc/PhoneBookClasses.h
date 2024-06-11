/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClasses.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:31:25 by deordone          #+#    #+#             */
/*   Updated: 2024/06/11 16:15:06 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
	public:
		Contact(void);
		~Contact(void);
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	unsigned int phone_number;
	std::string darkest_secret;
};

#endif

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Phone
{
	private:
		Contact _contacts[8];
	public:
		Phone(void);
		~Phone(void);
};

#endif

