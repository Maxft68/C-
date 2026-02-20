/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 08:53:22 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 12:28:46 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <stack>
#include <deque>

int main(){

	std::deque<int> D;

	for (int i = 0; i < 10; i++){ //insert in D
		D.push_back(i*10);
	}

	for (size_t j = 0; j < D.size(); j++){ // print all D
		std::cout << D[j] << " ";
	}
	std::cout << std::endl;
	
	try{
		std::deque<int>::iterator find = easyfind(D, 40);
		std::cout << "We found the number: " << *find << std::endl;
		
		std::deque<int>::iterator find2 = easyfind(D, 142); //error
		std::cout << "We don't found..." << *find2 << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	};
}
