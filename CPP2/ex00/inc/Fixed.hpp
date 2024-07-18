/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:41:23 by deordone          #+#    #+#             */
/*   Updated: 2024/07/18 12:15:12 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	_fixPointNum;
		static const int octet = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits(int const raw );
};

#endif /* FIXED_HPP */
