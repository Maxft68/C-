/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:25:46 by max               #+#    #+#             */
/*   Updated: 2025/11/27 09:33:11 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hitpoints = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap default constructed." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitpoints = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
    *this = copy;
    std::cout << "ScavTrap " << _name << " copy constructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitpoints = other._hitpoints;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructed." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (_energy_points > 0 && _hitpoints > 0) {
        _energy_points--;
        if (target == _name){
            std::cout << "ScavTrap " << _name << " attacks itself, causing " << _attack_damage << " points of damage!" << std::endl;
            takeDamage(_attack_damage);
            return;
        }
        else
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ScavTrap " << _name << " has no energy or hitpoints left to attack." << std::endl;
    }
}
