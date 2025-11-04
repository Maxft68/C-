/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:49:46 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/04 11:19:08 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name) {
    std::cout << "HumanB is born" << std::endl;
}

HumanB::~HumanB (){
	std::cout << "HumanB is dead because of the black hole" << std::endl;
}

void HumanB::attack(){
	if ()
	std::cout << this->_name << "attack with " << &_weapon << std::endl;
}