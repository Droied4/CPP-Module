/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:41:23 by deordone          #+#    #+#             */
/*   Updated: 2024/07/18 18:27:06 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_fixPointNum;
		static const int _octet = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed();

		Fixed(const int N);
		Fixed(const float N);

		bool	operator>(const Fixed &obj) const ;
		bool	operator<(const Fixed &obj) const ;
		bool	operator>=(const Fixed &obj) const ;
		bool	operator<=(const Fixed &obj) const ;
		bool	operator==(const Fixed &obj) const ;
		bool	operator!=(const Fixed &obj) const ;

		Fixed	operator+(const Fixed &obj) const ;	
		Fixed	operator-(const Fixed &obj) const ;	
		Fixed	operator*(const Fixed &obj) const ;	
		Fixed	operator/(const Fixed &obj) const ;


		Fixed	&operator++(void); //prefix	
		Fixed	operator++( int ); //postfix	
		Fixed	&operator--(void); //prefix	
		Fixed	operator--( int ); //postfix	
		
		static Fixed &min(Fixed &a, Fixed &b); 
		static const Fixed &min(const Fixed &a, const Fixed &b); 
		static Fixed &max(Fixed &a, Fixed &b); 
		static const Fixed &max(const Fixed &a, const Fixed &b); 
		
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &operator<<( std::ostream &out, Fixed const &obj);

#endif /* FIXED_HPP */
