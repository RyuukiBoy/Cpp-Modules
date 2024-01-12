/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bad <oait-bad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:42:58 by oait-bad          #+#    #+#             */
/*   Updated: 2023/11/13 19:08:59 by oait-bad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed_point_value = 0;
}

Fixed::Fixed(const int n)
{
	this->_fixed_point_value = n << this->_fractional_bits;
}

Fixed::Fixed(const float n)
{
	this->_fixed_point_value = roundf(n * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed & src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
	this->_fixed_point_value = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixed_point_value / (1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->_fixed_point_value >> this->_fractional_bits);
}

std::ostream & operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed & rhs) const
{
	return (this->_fixed_point_value > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed & rhs) const
{
	return (this->_fixed_point_value < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed & rhs) const
{
	return (this->_fixed_point_value >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed & rhs) const
{
	return (this->_fixed_point_value <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed & rhs) const
{
	return (this->_fixed_point_value == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed & rhs) const
{
	return (this->_fixed_point_value != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	this->_fixed_point_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->_fixed_point_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	return (a > b ? a : b);
}

