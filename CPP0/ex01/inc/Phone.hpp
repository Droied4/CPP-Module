/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:31:25 by deordone          #+#    #+#             */
/*   Updated: 2024/06/24 10:23:21 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <vector>
# include <cstring>

class Phone
{
  private:
	Contact _contacts[8];

  public:
	Phone(void);
	~Phone(void);
	void printContent(void);
	void welcome(void) const;
	void addContact(void);
	void findContact(void);
};

#endif
