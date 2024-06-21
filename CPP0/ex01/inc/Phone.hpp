/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:31:25 by deordone          #+#    #+#             */
/*   Updated: 2024/06/21 22:58:57 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class Phone
{
  private:
	Contact _contacts[8];

  public:
	Phone(void);
	~Phone(void);
	void welcome(void) const;
	void addContact(void);
	void findContact(void);
};

#endif
