/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:46:59 by max               #+#    #+#             */
/*   Updated: 2025/11/26 15:47:27 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), y(0){
	//std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(const float x_coord, const float y_coord) : _x(x_coord), _y(y_coord){
	//std::cout << "Float Point constructor called" << std::endl;
}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y){
	//std::cout << "Copy Point constructor called" << std::endl;
}

Point::~Point(){
	//std::cout << "Point Destructor called" << std::endl;
}

Point& Point::operator=(const Point & other){
	(void)other;	
	return *this;
}

Fixed Point::getX(void) const{
	return (this->_x);
}

Fixed Point::getY(void) const{
	return (this->_y);
}