/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 09:17:06 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/20 11:31:57 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main() {

    Data myobject;
    myobject.number = 42;
    myobject.name = "Test Data";

    Data* a = &myobject;

	std::cout << std::endl;
    std::cout << BLUE_RESET("						Data content A: ") << "ID=" << a->number << ", Name=" << a->name << std::endl;
    std::cout << "Adresse before serialize :			 " << RED_RESET(a) << std::endl;
    
    uintptr_t ptr = Serializer::serialize(a); //transformation
	
    std::cout << "Serialize unsign int (dec): " << GREEN_RESET(ptr) << std::endl;
    std::cout << "convert in hexa:(hex):                           0x" << std::hex << RED_RESET(ptr) << std::dec << std::endl;

    Data* b = Serializer::deserialize(ptr); //retransformation

    std::cout << "Adress after :	  				 " << RED_RESET(b) << std::endl;

    if (a == b) {
		std::cout << std::endl;
        std::cout << "Succes: Pointers match!" << std::endl;

        std::cout << BLUE_RESET("						Data content B: ") << "ID=" << b->number << ", Name=" << b->name << std::endl;
    }
    else {
        std::cout << "Lost." << std::endl;
    }
	
	uintptr_t ptr2 = Serializer::serialize(b);
	std::cout << "Serialize2 unsign int :     " << GREEN_RESET(ptr2) << std::endl;
    return 0;
}