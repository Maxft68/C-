/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:34:27 by max               #+#    #+#             */
/*   Updated: 2025/11/05 11:46:57 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(){
	//std::cout <<"I'M ALIVE" << std::endl;
}

void Zombie::announce (void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
	//std::cout << this->_name << "I'M ALIVE BIS" << std::endl;
	this->_name = name;
}

Zombie::~Zombie(){
	std::cout << this->_name << " is going to die." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}