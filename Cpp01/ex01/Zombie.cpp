/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:34:27 by max               #+#    #+#             */
/*   Updated: 2025/12/08 14:14:50 by mdsiurds         ###   ########.fr       */
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
	if (!_name.empty())
		std::cout << this->_name << " is going to die." << std::endl;
	else
		std::cout << "Someone is going to die." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}