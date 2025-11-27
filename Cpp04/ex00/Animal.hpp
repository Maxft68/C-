/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:53:41 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/27 16:07:32 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>

class Animal{
	protected:
		std::string _type;
		
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void makeSound(void) const;
		std::string getType() const;
};

Animal::Animal(){
	std::cout << "Default operator constructed" << std::endl;
}

Animal::Animal(const Animal& copy){
	*this = copy;
	std::cout << "Copy operator constructed" << std::endl;
}

Animal& Animal::operator=(const Animal& other){
	if (this != &other){
		_type = other._type;
	}
}

void makeSound(void){
	std::cout << "Just a cry" << std::endl;
}