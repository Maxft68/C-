/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:40:07 by max               #+#    #+#             */
/*   Updated: 2025/12/15 15:52:52 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy){
    for (int i = 0; i < 4; i++)
        if (copy._inventory[i])
            _inventory[i] = copy._inventory[i]->clone();
        else
            _inventory[i] = NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other){
    if (this != &other){
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

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (_inventory[i])
            delete _inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if (!m) return;
    for (int i = 0; i < 4; i++){
        if (_inventory[i] == NULL){
            _inventory[i] = m;
            return;
        }
    }
    std::cout << "MateriaSource inventory full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (_inventory[i] && _inventory[i]->getType() == type)
            return _inventory[i]->clone();
    }
	std::cout << "CreateMateria: Unknow type \\O/ " << std::endl; 
    return 0;
}
