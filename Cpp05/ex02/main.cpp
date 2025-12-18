/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:52:04 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/18 17:46:14 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	// try{
	// 	Bureaucrat max("max", 148);
	// 	max.decrement();
	// 	max.decrement();
	// 	max.decrement();
	// }
	// catch (const std::exception& error){
	// 	std::cerr << "Error catch1: " << error.what() << std::endl << std::endl;
	// }
	
	// try{
	// 	Bureaucrat maxou("maxou", 3);
	// 	maxou.increment();
	// 	maxou.increment();
	// 	maxou.increment();
	// }
	// catch (const std::exception& error){
	// 	std::cerr << "Error catch2: " << error.what() << std::endl << std::endl;
	// }

	try{
		Bureaucrat Jean("Jean", 11);
		Form a;
		Form b("Bill", 130, 120);
		std::cout << Jean <<std::endl;
		std::cout << b <<std::endl;
		//Jean.signForm(b);
		Jean.signForm(b);
		Jean.signForm(b);
		//b.beSigned(Jean);
		//Jean.increment();
		//b.beSigned(Jean);
	}
	catch (const std::exception& error){
		std::cerr << "Error catch3: " << error.what() << std::endl << std::endl;
		
	}
}