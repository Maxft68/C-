/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:52:04 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 15:48:18 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){

	try{
		Bureaucrat President("President", 25);
		Bureaucrat Jean("Jean", 7);
		PresidentialPardonForm Document("Paul");
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
}