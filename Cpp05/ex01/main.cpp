/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:52:04 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/16 13:58:04 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat max("max", 148);
		max.decrement();
		max.decrement();
		max.decrement();
	}
	catch (const std::exception& error){
		std::cerr << "Error catch: " << error.what() << std::endl;
	}
	
	try{
		Bureaucrat maxou("maxou", 3);
		maxou.increment();
		maxou.increment();
		maxou.increment();
	}
	catch (const std::exception& error){
		std::cerr << "Error catch: " << error.what() << std::endl;
	}
}