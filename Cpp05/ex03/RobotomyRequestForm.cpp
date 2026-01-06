/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:01:58 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 18:19:25 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> // Pour rand()
#include <ctime>


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default"){
	std::cout << GREEN_RESET("Default constructor RobotomyRequest created") << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target){
	std::cout << GREEN_RESET("Constructor RobotomyRequest with target created") << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) : AForm(copy), _target(copy._target){
	std::cout << GREEN_RESET("Copy constructor RobotomyRequest created") << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	if (this != &other){
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << RED_RESET("Destructor RobotomyRequestForm called") << std::endl;
}

void RobotomyRequestForm::beExecuted()const{
	std::cout << "*Drilling noises*" << std::endl;
	if (std::rand() % 2 == 0) {
        std::cout << this->_target << " has been robotomized successfully!🤖🤖 " << std::endl;
	// int random_value = std::rand() % 100;
	// if (random_value < 50){
	// 	std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	// }
    } else {
        std::cout << "Robotomy failed for the target " << this->_target << " \0/ " << std::endl;
    }
}
