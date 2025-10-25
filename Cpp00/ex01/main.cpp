/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:17:35 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/25 17:50:58 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
	while(42){
		PhoneBook phonebook;
		
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

