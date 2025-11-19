/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:44:19 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/18 12:08:54 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	//std::cout << "An Harl is born" << std::endl;
}

Harl::~Harl(){

	//std::cout << "Harl is dying" << std::endl;
} 


void Harl::debug(void){
	std::cout << "Debug say hello" << std::endl;
}

void Harl::info(void){
	std::cout << "Info say hello" << std::endl;
}

void Harl::warning(void){
	std::cout << "Warning say hello" << std::endl;
}

void Harl::error(void){
	std::cout << "Error say hello" << std::endl;
}

void Harl::complain(std::string level){

	static void (Harl::* const funcs[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	// or:  typedef void (Harl::*HarlFunc)();  static const char* array_func[] = {"DEBUG", "INFO", "WARNING" "ERROR"};
	
	static const char* array_func[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	const int size = sizeof(array_func) / sizeof(array_func[0]);
	
	int i = 0;
	for (; i < size; i++){
		if (level == array_func[i])
			break;
		}
		if (i == size){//do not find
			std::cout << "No method has this name" << std::endl;
			return;
	}
	
	(this->*funcs[i])();
}

