/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:50:07 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/05 12:06:01 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(){
	std::cout << "A fire gun is born" << std::endl;
}

Weapon::Weapon(std::string type_of_weapon){
	std::cout << "A fire gun with name is born" << std::endl;
	this->_type = type_of_weapon;
}

Weapon::~Weapon(){
	std::cout << "A fire gun is broked" << std::endl;
}


const std::string &Weapon::getType() const{
	return this->_type;
}

void Weapon::setType(std::string new_value){
	this->_type = new_value;
}