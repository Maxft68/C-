/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:40:07 by max               #+#    #+#             */
/*   Updated: 2025/12/07 21:42:26 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    // Test Deep Copy
    std::cout << "--- Deep Copy Test ---" << std::endl;
    Character* c1 = new Character("C1");
    c1->equip(src->createMateria("ice"));
    Character* c2 = new Character(*c1); // Copy constructor
    c1->use(0, *bob);
    c2->use(0, *bob); // Should work
    
    delete c1;
    c2->use(0, *bob); // Should still work if deep copy is correct
    delete c2;

    // Test Unequip (Leak check manual)
    std::cout << "--- Unequip Test ---" << std::endl;
    AMateria* ptr = me->getMateria(0); // Need getMateria helper or just assume we know?
    // Wait, Character doesn't have getMateria in the subject interface?
    // The subject doesn't give getMateria.
    // So we can't easily save the pointer unless we kept it from createMateria.
    // In this main, 'tmp' holds the last created one (cure).
    // Let's unequip slot 1 (cure).
    me->unequip(1);
    // tmp still points to cure. We must delete it.
    delete tmp; 

    delete bob;
    delete me;
    delete src;
    
    return 0;
}
