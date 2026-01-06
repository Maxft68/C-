/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:12:56 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 17:22:18 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Default"){
	std::cout << GREEN_RESET("Default constructor PresidentialPardonForm created") << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << GREEN_RESET("Constructor PresidentialPardonForm with Target created") << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target){
	std::cout << GREEN_RESET("Copy Constructor PresidentialPardonForm") << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << RED_RESET("Destructor PresidentialPardonForm called") << std::endl;
}


void PresidentialPardonForm::beExecuted() const{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}