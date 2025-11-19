/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:23:12 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/19 13:17:00 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Fixed{
	private:
		int _value;
		static const int _bit = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy); // create an instance and instant initialize like an other instance of the same class
		Fixed& operator=(const Fixed & other); // take an instance of a class and copy all specified variables
		
		int getRawBits( void ) const;
		void setRawBits( int const bit );
};

