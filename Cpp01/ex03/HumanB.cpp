/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:49:46 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/04 16:26:13 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
    std::cout << "HumanB is born" << std::endl;
}

HumanB::~HumanB (){
	std::cout << "HumanB is dead because of the black hole" << std::endl;
}

void HumanB::attack(){
	if (_weapon)
		std::cout << this->_name << " attack with " << _weapon->getType() << std::endl;
	else
		std::cout << "I DON'T HAVE WEAPON" << std::endl;
}

void HumanB::setWeapon(Weapon *weapon) {
	this->_weapon = weapon;
}
