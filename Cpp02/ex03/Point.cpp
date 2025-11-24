/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:46:59 by max               #+#    #+#             */
/*   Updated: 2025/11/24 15:47:40 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0){
	//std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(const float x_coord, const float y_coord) : x(x_coord), y(y_coord){
	//std::cout << "Float Point constructor called" << std::endl;
}

Point::Point(const Point& copy) : x(copy.x), y(copy.y){
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
	return (this->x);
}

Fixed Point::getY(void) const{
	return (this->y);
}