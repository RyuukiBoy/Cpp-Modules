/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:39:24 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/13 22:12:30 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixed_point_value;
		static const int _fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed & src);
		~Fixed(void);
		Fixed & operator=(const Fixed & rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator>(const Fixed & rhs) const;
		bool operator<(const Fixed & rhs) const;
		bool operator>=(const Fixed & rhs) const;
		bool operator<=(const Fixed & rhs) const;
		bool operator==(const Fixed & rhs) const;
		bool operator!=(const Fixed & rhs) const;
		Fixed operator+(const Fixed & rhs) const;
		Fixed operator-(const Fixed & rhs) const;
		Fixed operator*(const Fixed & rhs) const;
		Fixed operator/(const Fixed & rhs) const;
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static const Fixed & min(const Fixed & a, const Fixed & b);
		static const Fixed & max(const Fixed & a, const Fixed & b);
};

std::ostream & operator<<(std::ostream & out, Fixed const & rhs);

#endif