/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:40:07 by max               #+#    #+#             */
/*   Updated: 2025/12/15 15:54:06 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource(); //main given in subject
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
	delete bob;
	delete me;
	delete src;

	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	// ICharacter* bob = new Character("bob");
	// ICharacter* me = new Character("me");
	// AMateria* tmp;

	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// me->unequip(3);

	// tmp = src->createMateria("cure");
	
	// me->equip(tmp);
	// me->use(3, *bob);
	
	// tmp = src->createMateria("ice");
	// me->equip (tmp);
	// bob->equip (tmp);
	
	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(3, *bob);

	// delete bob;
	// delete me;
	// delete src;
	return (0);
}
