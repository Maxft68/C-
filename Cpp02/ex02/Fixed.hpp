/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:23:12 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/19 21:41:02 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <ostream>
#include <cmath>

class Fixed{
	private:
		int _int_value;
		static const int _bit = 8;

	public:
		Fixed();
		Fixed(const int int_convert);
		Fixed(const float float_convert);
		~Fixed();
		Fixed(const Fixed& copy); // create an instance and instant initialize like an other instance of the same class
		Fixed& operator=(const Fixed & other); // take an instance of a class and copy all specified variables
		
		float toFloat( void ) const;//converts fixed-point value to a floating-point value
		int toInt( void ) const;//converts the fixed-point value to an integer value
		
		int getRawBits( void ) const;
		void setRawBits( int const bit );

		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		Fixed operator+(const Fixed& other) const;
};


std::ostream& operator<<(std::ostream& os, const Fixed& other);
