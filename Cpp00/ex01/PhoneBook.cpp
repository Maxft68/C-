/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:54:24 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/25 19:34:38 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::ADD(){
	std::cout << "What's your first name ?" << std::endl;
	std::string line;
	std::getline(std::cin, line);
	while(line.empty()){
		std::cout << "Easy question: WHAT'S YOUR FIRST NAME !?" << std::endl;
		std::getline(std::cin, line);
	}
	static int x = 0;
	x = x % 8;
	std::cout << x; //provisoire
	this->contact[x].setFirstName(line);
	
	
	line.clear();
	std::cout << "What's your name ?" << std::endl;
	std::getline(std::cin, line);
	while(line.empty()){
		std::cout << "Easy question: WHAT'S YOUR NAME !?" << std::endl;
		std::getline(std::cin, line);
	}
	this->contact[x].setName(line);

	
	line.clear();
	std::cout << "What's your Phone Number ?" << std::endl;
	std::getline(std::cin, line);
	while(line.empty()){
		std::cout << "Easy question: WHAT'S YOUR NUMBER !?" << std::endl;
		std::getline(std::cin, line);
	}
	this->contact[x].setNumber(line);

	
	line.clear();
	std::cout << "What's your Nickname ?" << std::endl;
	std::getline(std::cin, line);
	while(line.empty()){
		std::cout << "Easy question: WHAT'S YOUR NICKNAME !?" << std::endl;
		std::getline(std::cin, line);
	}
	this->contact[x].setNickName(line);
	
	
	line.clear();
	std::cout << "👀What's your Darkest Secret ?👀" << std::endl;
	std::getline(std::cin, line);
	while(line.empty()){
		std::cout << "Easy question:👹 WHAT'S YOUR DARKEST SECRET !?👹" << std::endl;
		std::getline(std::cin, line);
	}
	this->contact[x].setSecret(line);

	x++;
}


void	PhoneBook::SEARCH(){
	std::cout << "--------------------------------------------" <<std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::string line;
	for (int i = 0; i < 8; i++){
		std::cout << this->contact[i].getFirstName() << std::endl;
		std::cout << "|" << std::setw(10) << i << "|"
				<< std::setw(10) << this->contact[i].getFirstName() << "|"
				<< std::setw(10) << this->contact[i].getName() << "|"
				<< std::setw(10) << this->contact[i].getNickName() << "|";
	}
}



void	PhoneBook::EXIT(){
	std::cout << "Why are you leaving me ? :'(" << std::endl;
	std::exit(0);
}

PhoneBook::PhoneBook() {}


PhoneBook::~PhoneBook() {}
