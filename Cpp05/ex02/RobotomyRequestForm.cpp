/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:01:58 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 16:31:01 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"



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

// 		~RobotomyRequestForm();

// 		virtual void beExecuted() const;