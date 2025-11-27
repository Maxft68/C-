/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:56:29 by max               #+#    #+#             */
/*   Updated: 2025/11/26 15:43:46 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitpoints(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap default constructed." << std::endl;
}


ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap " << name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    *this = copy;
    std::cout << "ClapTrap " << _name << " copy constructed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitpoints = other._hitpoints;
        _energy_points = other._energy_points;
        _attack_damage = other._attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (_energy_points > 0 && _hitpoints > 0) {
        _energy_points--;
        if (target == _name){
            std::cout << "ClapTrap " << _name << " attacks itself, causing " << _attack_damage << " points of damage!" << std::endl;
            takeDamage(_attack_damage);
            return;
        }
        else
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << _name << " has no energy or hitpoints left to attack." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitpoints -= amount;
    if (_hitpoints <= 0) {
        _hitpoints = 0;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! And... die ☠️ ☠️ ☠️" << std::endl;
        return;
    }
    if (amount > 0) {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Rest: " << _hitpoints << "HP" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points > 0 && _hitpoints > 0) {
        _energy_points--;
        _hitpoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points! New hitpoints: " << _hitpoints << std::endl;
    } 
    else {
        std::cout << "ClapTrap " << _name << " has no energy or hitpoints left to repair." << std::endl;
    }
}

