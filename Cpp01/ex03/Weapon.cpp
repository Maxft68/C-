/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:50:07 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/03 17:14:29 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const{
	return this->_type;
}


void Weapon::setType(std::string new_value){
	this->_type = new_value;
}

Weapon::Weapon(){
	std::cout << "A fire gun is born" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "A fire gun is broked" << std::endl;
}