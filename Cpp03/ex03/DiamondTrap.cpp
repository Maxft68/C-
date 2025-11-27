/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:24:55 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/27 12:39:20 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap() {
	_name = ClapTrap::_name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	
	std::cout << "DiamondTrap default constructed." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	_name = ClapTrap::_name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap " << _name << " constructed." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "DiamondTrap " << _name << " copy constructed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destructed." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "My DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "My ClapTrap name is: " << ClapTrap::_name << std::endl;
}