/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:43:02 by max               #+#    #+#             */
/*   Updated: 2026/01/20 13:06:59 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/***************************************************************************************************
static_cast:
Use this to change a value from one type to another when the types are related 
	(like int to float, or between classes that are connected). The check is done by the compiler,
	not when the program runs.

reinterpret_cast:
Use this for changing one type to a very different type (like a pointer to an int).
	This is risky and should only be used if you really know what you are doing.
	The result can be wrong or not make sense.

dynamic_cast:
Use this to change a pointer or reference from one class to another when the classes use inheritance
	and have at least one virtual function. The program checks if the change is possible when it runs 
	(if not, you get nullptr or an exception).
****************************************************************************************************/

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
