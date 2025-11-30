/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 17:53:44 by max               #+#    #+#             */
/*   Updated: 2025/11/30 18:33:06 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal(){
	this->_type = "Animal";
	std::cout << GREEN_RESET("AAnimal Default operator constructed") << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy){
	*this = copy;
	std::cout << GREEN_RESET("AAnimal Copy operator constructed") << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
	if (this != &other){
		this->_type = other._type;
	}
	return *this;
}

void AAnimal::makeSound(void) const {
	std::cout << "I can't cry!!" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << RED_RESET("AAnimal destructed") << std::endl;
}

std::string AAnimal::getType() const{
	return this->_type;
}