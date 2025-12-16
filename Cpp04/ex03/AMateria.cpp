/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:26:50 by max               #+#    #+#             */
/*   Updated: 2025/12/15 14:22:33 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    this->_type = "Default";
	this->is_use = false;
    std::cout << GREEN_RESET("AMateria Default operator constructed") << std::endl;
}

AMateria::AMateria(std::string const &type){
    this->_type = type;
	this->is_use = false;
    std::cout << GREEN_RESET("AMateria Parameterized operator constructed") << std::endl;
}

AMateria::AMateria(const AMateria& other){
    this->_type = other._type;
	this->is_use = false;
    std::cout << GREEN_RESET("AMateria Copy operator constructed") << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other){
    (void)other;
    // if (this != &other){
    //     this->_type = other._type; // subject says "doesn't make sense"
    // }
    return *this;
}

AMateria::~AMateria(){
    std::cout << RED_RESET("AMateria destructed") <<  std::endl;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target){
    (void)target;
}

void AMateria::set_is_use (bool trueorfalse){
	is_use = trueorfalse;
}

bool AMateria::get_is_use (void){
	return (this->is_use);
}