/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:56:47 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 11:54:17 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	this->_type = "Dog";
	std::cout << "Dog Default operator constructed" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	*this = copy;
	std::cout << "Dog Copy operator constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

void Dog::makeSound(void) const{
	std::cout << "Wouaf Wouaf" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructed" << std::endl;
}

// std::string Dog::getType() const{
// 	std::cout << "Dog getType called" << std::endl;
// 	return this->_type;
// }