/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:52:04 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 17:59:22 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

int main(){
	std::srand(std::time(NULL));// For the random 1/2 for Robotomy
	std::cout << std::endl << BLUE_RESET("-------------PresidentForm-------------") << std::endl;
	try{
		Bureaucrat President("President", 25);
		Bureaucrat Jean("Jean", 7);
		PresidentialPardonForm Document("Paul_target");
		std::cout << std::endl << BLUE_RESET("-------------TEST 1-------------") << std::endl;
		Jean.executeForm(Document);//try one before sign
		
		
		President.signAForm(Document);
		std::cout << std::endl << BLUE_RESET("-------------TEST 2-------------") << std::endl;
		Jean.executeForm(Document);// try 2 after sign

		
		Jean.increment();
		Jean.increment();
		std::cout << std::endl << BLUE_RESET("-------------TEST 3-------------") << std::endl;
		Jean.executeForm(Document);// try 3 with the valid grade
	}
	catch (const std::exception& error){
		std::cerr << "Error catch3: " << error.what() << std::endl << std::endl;
		
	}
	std::cout << std::endl << BLUE_RESET("-------------RobotomyForm-------------") << std::endl;
	try{
		Bureaucrat President("President", 70);
		Bureaucrat Claude("Claude", 40);
		RobotomyRequestForm Robot("Paul_target");
		Claude.executeForm(Robot);
		President.signAForm(Robot);
		Claude.executeForm(Robot);
	}
	catch (const std::exception& error){
		std::cerr << "Error catch4: " << error.what() << std::endl << std::endl;
	}
}