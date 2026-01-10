/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:43:02 by max               #+#    #+#             */
/*   Updated: 2026/01/10 21:40:53 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) {
	
    int random = rand() % 3;

    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type(pointer)" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p); //implicit throw if fail
        std::cout << "A" << std::endl;
        return;
    }
    catch (...) {
        //std::cout << "First catch fail" << std::endl;
    }

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (...) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (...) {}

    std::cout << "Unknown type(reference)" << std::endl;
}

int main() {
    std::srand(std::time(NULL));

    for (int i = 0; i < 5; ++i) {
		std::cout << "Test " << i + 1 << ": " << std::endl;
        Base* instance = generate();

        std::cout << "Identify with pointer: ";
        identify(instance);

        std::cout << "Identify with reference: ";
        identify(*instance);
		std::cout << "-----------------------" << std::endl;

        delete instance;
    }
    std::cout << "Test Fail: " << std::endl;

    Base *fail = new Base();

    identify(fail);

    identify(*fail);
    
    delete fail;
    
    return 0;
}
