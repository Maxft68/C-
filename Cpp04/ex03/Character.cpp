/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:40:07 by max               #+#    #+#             */
/*   Updated: 2025/12/15 15:46:13 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
Character::Character() : _name("Default"){
    for (int i = 0; i < 4; i++){
		_inventory[i] = NULL;
	}
	_floor = NULL;
}

Character::Character(std::string name) : _name(name){
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
	}
	_floor = NULL;
}

Character::Character(const Character& copy) : _name(copy._name){
    for (int i = 0; i < 4; i++){
        if (copy._inventory[i])
            _inventory[i] = copy._inventory[i]->clone();
        else
            _inventory[i] = NULL;
	}
	_floor = NULL;
}

Character& Character::operator=(const Character& other){
    if (this != &other){
        _name = other._name;
		if (_floor)
			delete _floor;
		_floor = NULL;
        for (int i = 0; i < 4; i++){
            if (_inventory[i])
                delete _inventory[i];
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character(){
	for (int i = 0; i < 4 && _inventory[i]; i++) {
		delete _inventory[i];
	}
	if (_floor)
		delete _floor;
}

std::string const & Character::getName() const{
    return _name;
}

void Character::equip(AMateria* m){
    if (!m){
        std::cout << "Cannot equip" << std::endl;
        return;
    }
	if (m->get_is_use() == true){
		std::cout << "Materia is already use by someone" << std::endl;
		return;
	}
    for (int i = 0; i < 4; i++){
        if (_inventory[i] == NULL){
            _inventory[i] = m;
			m->set_is_use(true);
            std::cout << "Equipped " << m->getType() << " in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "Inventory full, cannot equip " << m->getType() << std::endl;
	delete m;
	m = NULL;
}

void Character::unequip(int idx){
    if (idx < 0 || idx >= 4){
        std::cout << "Invalid index " << idx << " for unequip." << std::endl;
        return;
    }
    if (_inventory[idx]){
        std::cout << "Unequipped " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
		if (_floor)
			delete _floor;
		_floor = _inventory[idx];
		_inventory[idx]->set_is_use(false);
		_inventory[idx] = NULL;
    }
	else {
        std::cout << "No materia to unequip in slot " << idx << std::endl;
    }
}

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx >= 4){
        std::cout << "Invalid index " << idx << " for use." << std::endl;
        return;
    }
    if (_inventory[idx]){
        _inventory[idx]->use(target);
    } else {
        std::cout << "No materia to use in slot " << idx << std::endl;
    }
}

