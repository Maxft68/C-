/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:51:13 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/29 17:42:26 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Cat* garfield = new Cat();
	
	garfield->getBrain()->setIdea(0, "I hate dogs");
	garfield->getBrain()->setIdea(1, "I love Lasagna");

	std::cout << "Garfield's idea 0: " << garfield->getBrain()->getIdea(0) << std::endl;
	std::cout << "Garfield's idea 1: " << garfield->getBrain()->getIdea(1) << std::endl;
	std::cout << "Garfield's idea 2: " << garfield->getBrain()->getIdea(2) << std::endl;
	std::cout << "Garfield's idea 200: " << garfield->getBrain()->getIdea(200) << std::endl;

	delete garfield;
	std::cout << std::endl;


	Dog Idefix;
	Idefix.getBrain()->setIdea(0, "I want eat a cat");
	
	{
		Dog clone = Idefix;
		std::cout << "Idefix's idea: " << Idefix.getBrain()->getIdea(0) << std::endl;
		std::cout << "clone's idea: " << clone.getBrain()->getIdea(0) << std::endl;
		
		// Modify clone's brain
		clone.getBrain()->setIdea(0, "I want a ball");
		std::cout << "clone's new idea: " << clone.getBrain()->getIdea(0) << std::endl;
		std::cout << "Idefix's idea (should still be bone): " << Idefix.getBrain()->getIdea(0) << std::endl;
	} 
	
	std::cout << "End of main, let's destruct all" << std::endl << std::endl;
	return 0;
}