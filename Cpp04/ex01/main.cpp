/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:51:13 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/28 15:10:28 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	const Animal* meta = new Animal();
	std::cout << std::endl;
	
	const Animal* j = new Dog();
	std::cout << std::endl;
	
	const Animal* i = new Cat();
	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	j->makeSound(); //will output the dog sound!
	std::cout << std::endl;
	
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound(); //will output the animal sound!
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;

	return (0);
}