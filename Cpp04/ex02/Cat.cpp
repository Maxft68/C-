/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:57:12 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/30 17:55:57 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal(){
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << GREEN_RESET("Cat Default operator constructed") << std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy) {
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	std::cout << GREEN_RESET("Cat Copy Constructor called") << std::endl;
}

Cat& Cat::operator=(const Cat& other){
	if (this != &other){
		this->_type = other._type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound(void) const{
	std::cout << "Miaouuuuuuuuuuuuu" << std::endl;
}

Cat::~Cat(){
	std::cout << RED_RESET("Cat destructed") << std::endl;
	delete this->_brain;
}

std::string Cat::getType() const{
	return this->_type;
}

Brain* Cat::getBrain() const{
	return this->_brain;
}