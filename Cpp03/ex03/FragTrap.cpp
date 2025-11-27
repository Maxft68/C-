/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 08:14:47 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/27 11:48:45 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap default constructed." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap " << _name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "FragTrap " << _name << " copy constructed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		_name = other._name;
		_hitpoints = other._hitpoints;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructed." << std::endl;
}

void FragTrap::highFivesGuys (void){
	std::cout << "Would you please give me a beautiful high-fives 👋 and validate my CPP03 ✅ 🎅" << std::endl;
}
