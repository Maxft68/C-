/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:56:47 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/29 18:06:44 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << GREEN_RESET("Dog Default operator constructed") << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	std::cout << GREEN_RESET("Dog Copy Constructor called") << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "Wouaf Wouaf" << std::endl;
}

Dog::~Dog(){
	std::cout << RED_RESET("Dog destructed") << std::endl;
	delete this->_brain;
}

std::string Dog::getType() const{
	return this->_type;
}

Brain* Dog::getBrain() const{
	return this->_brain;
}