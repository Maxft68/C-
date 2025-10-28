/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:54:24 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/28 11:52:16 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::ADD(){
	static int x = 0;
	x = x % 8;
	std::cout << "Contact number: " << x + 1 << std::endl;


	std::cout << "What's your first name ?" << std::endl;
	std::string line;
	std::getline(std::cin, line);
	while(line.empty()){
		std::cout << "Easy question: WHAT'S YOUR FIRST NAME !?" << std::endl;
		std::getline(std::cin, line);
	}
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


std::string	PhoneBook::resize(std::string str){
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}


void	PhoneBook::SEARCH(){
	std::cout << "--------------------------------------------" <<std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::string line;
	for (int i = 0; i < 8; i++){
		std::cout << "|" << std::setw(10) << i + 1 << "|"
				<< std::setw(10) << this->resize(this->contact[i].getFirstName()) << "|"
				<< std::setw(10) << this->resize(this->contact[i].getName()) << "|"
				<< std::setw(10) << this->resize(this->contact[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "--------------------------------------------" <<std::endl;


	std::cout << "Which contact do you want to see in detail ? (Type the index)" << std::endl;
	std::getline(std::cin, line);
	while(line.empty() || line.length() > 1 || line[0] < '1' || line[0] > '8'){
		std::cout << "Invalid index. Please enter a number between 1 and 8." << std::endl;
		std::getline(std::cin, line);
	}
	int index = line[0] - '0';
	index += -1;
	std::cout << "First Name: " << this->contact[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contact[index].getName() << std::endl;
	std::cout << "Phone Number: " << this->contact[index].getNumber() << std::endl;
	std::cout << "Nickname: " << this->contact[index].getNickName() << std::endl;
	std::cout << "Darkest Secret: " << this->contact[index].getSecret() << std::endl;
	std::cout << "--------------------------------------------" << std::endl << std::endl;
}



void	PhoneBook::EXIT(){
	std::cout << "Why are you leaving me ? :'(" << std::endl;
	std::exit(0);
}

PhoneBook::PhoneBook() {}


PhoneBook::~PhoneBook() {}



#include <sstream>

void couille(std::string str){
	std::stringstream ss;
	int n;
	ss << str;
	ss >> n;
	
}