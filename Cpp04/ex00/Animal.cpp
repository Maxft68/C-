/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:53:12 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/01 15:32:36 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	this->_type = "Animal";
	std::cout << "Animal Default operator constructed" << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << "Animal Copy operator constructed" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

void Animal::makeSound(void) const{
	std::cout << "Just an animal cry" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructed" << std::endl;
}

std::string Animal::getType() const{
	//std::cout << "Animal getType called" << std::endl;
	return this->_type;
}