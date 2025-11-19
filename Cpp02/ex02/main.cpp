/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 07:35:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/19 19:55:16 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	
	// std::cout << std::endl;
	// Fixed const val1(10);
	// Fixed const val2(20);
	// Fixed const val3(10.0f);

	// std::cout << "Values: val1=" << val1 << ", val2=" << val2 << ", val3=" << val3 << std::endl;
	// std::cout << std::boolalpha; // for print "true" or "false" != std::noboolalpha

	// std::cout << "val1 > val2 is " << (val1 > val2) << std::endl;
	// std::cout << "val1 < val2 is " << (val1 < val2) << std::endl;
	// std::cout << "val1 >= val3 is " << (val1 >= val3) << std::endl;
	// std::cout << "val1 <= val3 is " << (val1 <= val3) << std::endl;
	// std::cout << "val1 == val3 is " << (val1 == val3) << std::endl;
	// std::cout << "val1 != val2 is " << (val1 != val2) << std::endl;

	return 0;
}