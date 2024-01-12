/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:14:04 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/13 10:53:55 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _fixed_point_value;
		static const int _fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);
		Fixed &operator=(const Fixed &src);
		void setRawBits(int const raw);
		int getRawBits(void) const;
};

#endif