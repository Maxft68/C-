/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:06:04 by max               #+#    #+#             */
/*   Updated: 2025/12/01 23:30:54 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure"){
    std::cout << GREEN_RESET("Cure Default operator constructed") << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy){
    std::cout << GREEN_RESET("Cure Copy operator constructed") << std::endl;
}

Cure& Cure::operator=(const Cure& other){
    (void)other;
    return *this;
}

Cure::~Cure(){
    std::cout << RED_RESET("Cure destructed") << std::endl;
}

AMateria* Cure::clone() const{
    AMateria* newCure = new Cure(*this);
    return (newCure);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
