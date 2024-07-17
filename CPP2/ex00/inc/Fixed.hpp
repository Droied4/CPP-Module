/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:41:23 by deordone          #+#    #+#             */
/*   Updated: 2024/07/17 14:18:11 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int	_num;
		static const int octet = 8;
	public:
		Fixed();
		Fixed(const Fixed &) = default;
		Fixed &operator=(const Fixed &);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits(int const raw );
};

#endif /* FIXED_HPP */
