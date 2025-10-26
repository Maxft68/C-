/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:17:35 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/25 19:35:35 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
	PhoneBook phonebook;
	while(42){
		std::cout << "What do you want to do ? (ADD, SEARCH or EXIT)" << std::endl;
		std::string line;
		std::getline(std::cin, line);

		if (line == "ADD")
			phonebook.ADD();
		else if(line == "SEARCH")
			phonebook.SEARCH();
		else if(line == "EXIT")
			phonebook.EXIT();
	}
}


