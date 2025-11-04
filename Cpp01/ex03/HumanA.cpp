/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:50:01 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/04 11:12:39 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    std::cout << "HumanA is born" << std::endl;
}

HumanA::~HumanA (){
	std::cout << "HumanA is dead because of the black hole" << std::endl;
}

void HumanA::attack(){
	std::cout << this->_name << "attack with " << &_weapon << std::endl;
}