/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:53:12 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/29 18:06:45 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	this->_type = "Animal";
	std::cout << GREEN_RESET("Animal Default operator constructed") << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << GREEN_RESET("Animal Copy operator constructed") << std::endl;
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
	std::cout << RED_RESET("Animal destructed") << std::endl;
}

std::string Animal::getType() const{
	return this->_type;
}