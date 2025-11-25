/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:56:29 by max               #+#    #+#             */
/*   Updated: 2025/11/25 15:35:31 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energy_points(10), attack_damage(0) {
    std::cout << "ClapTrap " << name << " constructed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    *this = copy;
    std::cout << "ClapTrap " << name << " copy constructed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitpoints = other.hitpoints;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destructed." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energy_points > 0 && hitpoints > 0) {
        energy_points--;
        if (target == name){
            std::cout << "ClapTrap " << name << " attacks itself, causing " << attack_damage << " points of damage!" << std::endl;
            takeDamage(attack_damage);
            return;
        }
        else
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " has no energy or hitpoints left to attack." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitpoints -= amount;
    if (hitpoints <= 0) {
        hitpoints = 0;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! And... die ☠️ ☠️ ☠️" << std::endl;
        return;
    }
    if (amount > 0) {
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Rest: " << hitpoints << "HP" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energy_points > 0 && hitpoints > 0) {
        energy_points--;
        hitpoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points! New hitpoints: " << hitpoints << std::endl;
    } 
    else {
        std::cout << "ClapTrap " << name << " has no energy or hitpoints left to repair." << std::endl;
    }
}

