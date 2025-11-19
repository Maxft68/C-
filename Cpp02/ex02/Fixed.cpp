/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:17:00 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/19 19:20:09 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _int_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_convert){
	std::cout << "Int constructor called" << std::endl;
	this->_int_value = int_convert * (1 << this->_bit);
}

Fixed::Fixed(const float float_convert){
	std::cout << "Float constructor called" << std::endl;
	this->_int_value = roundf(float_convert * (1 << this->_bit));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) // create an instance and instant initialize like an other instance of the same class
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &other) // take an instance of a class and copy all specified variables
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_int_value = other.getRawBits();
		// or: this->_int_value = other._int_value;
	}
	return *this;
}

float Fixed::toFloat( void ) const{//converts fixed-point value to a floating-point value
	return(static_cast<float>(this->_int_value) / (1 << this->_bit));
}

int Fixed::toInt( void ) const{//converts the fixed-point value to an integer value
	return((this->_int_value / (1 << this->_bit)));
}


int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits called" << std::endl;
	return (this->_int_value);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits called" << std::endl;
	this->_int_value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& other){
	os << other.toFloat();
	return(os);
}

	bool Fixed::operator>(const Fixed& other) const{
		return (this->_int_value > other._int_value);
	}
	bool Fixed::operator<(const Fixed& other) const{
		return (this->_int_value < other.getRawBits());
	}
	bool Fixed::operator>=(const Fixed& other) const{
		return (this->_int_value >= other._int_value);
	}
	bool Fixed::operator<=(const Fixed& other) const{
		return (this->_int_value <= other._int_value);
	}
	bool Fixed::operator==(const Fixed& other) const{
		return (this->_int_value == other._int_value);
	}
	bool Fixed::operator!=(const Fixed& other) const{
		return (this->_int_value != other._int_value);
	}
