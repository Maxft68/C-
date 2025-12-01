/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:26:50 by max               #+#    #+#             */
/*   Updated: 2025/12/01 16:29:12 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
    this->_type = "Default";
    std::cout << GREEN_RESET("AMateria Default operator constructed") << std::endl;
}

AMateria::AMateria(std::string const &type){
    this->_type = type;
    std::cout << GREEN_RESET("AMateria Parameterized operator constructed") << std::endl;
}

AMateria::AMateria(const AMateria& other){
    this->_type = other._type;
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

