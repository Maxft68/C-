/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:57:12 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/28 14:22:10 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->_type = "Cat";
	std::cout << "Cat Default operator constructed" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
	*this = copy;
	std::cout << "Cat Copy operator constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "Miaouuuuuuuuuuuuu" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructed" << std::endl;
}

std::string Cat::getType() const{
	return this->_type;
}