/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:34:27 by max               #+#    #+#             */
/*   Updated: 2025/11/02 20:13:08 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::announce (void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout << this->_name << " is destroyed." << std::endl;
}

void Zombie::setName(std::string name){
    this->_name = name;
}