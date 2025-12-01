/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:29:32 by max               #+#    #+#             */
/*   Updated: 2025/12/01 23:00:58 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    std::cout << GREEN_RESET("Ice Default operator constructed") << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy){
    std::cout << GREEN_RESET("Ice Copy operator constructed") << std::endl;
}

Ice& Ice::operator=(const Ice& other){
    (void)other;
    return *this;
}

Ice::~Ice(){
    std::cout << RED_RESET("Ice destructed") << std::endl;
}

AMateria* Ice::clone() const{
    AMateria* newIce = new Ice(*this);
    return (newIce);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

