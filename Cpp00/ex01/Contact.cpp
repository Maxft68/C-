/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:24:20 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/08 15:18:27 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(std::string str){
	this->_FirstName = str;
}

void Contact::setName(std::string str){
	this->_LastName = str;
}

void Contact::setNumber(std::string str){
	this->_PhoneNumber = str;
}

void Contact::setNickName(std::string str){
	this->_NickName = str;
}

void Contact::setSecret(std::string str){
	this->_DarkestSecret = str;
}



std::string	Contact::getFirstName(){
	return(this->_FirstName);
}

std::string Contact::getName(){
	return(this->_LastName);
}

std::string Contact::getNumber(){
	return(this->_PhoneNumber);
}

std::string Contact::getNickName(){
	return(this->_NickName);
}

std::string Contact::getSecret(){
	return(this->_DarkestSecret);
}

