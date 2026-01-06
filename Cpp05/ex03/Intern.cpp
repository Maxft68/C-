/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:50:26 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/06 15:03:50 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern(){
	std::cout << GREEN_RESET("Default constructor Intern created") << std::endl;
}

Intern::Intern(const Intern& copy){
	(void) copy;
	std::cout << GREEN_RESET("Copy constructor Intern created") << std::endl;
}
Intern&  Intern::operator=(const Intern& other){
	(void) other;
	return *this;
}
Intern::~Intern(){
	std::cout << RED_RESET("Destructor Intern called") << std::endl;
}

AForm* Intern::createPresidentForm(const std::string& target){
	return(new PresidentialPardonForm(target));
}

AForm* Intern::createRobotomyForm(const std::string& target){
	return(new RobotomyRequestForm(target));
}

AForm* Intern::createShrubberyForm(const std::string& target){
	return(new ShrubberyCreationForm(target));
}

const char* Intern::NoMethod::what() const throw(){
	return("Intern: NoMethod was found with this name");
}

AForm* Intern::makeForm(const std::string& FormName, const std::string& TargetName){
	AForm* (Intern::* funcs[3])(const std::string&) = { &Intern::createPresidentForm, &Intern::createRobotomyForm, &Intern::createShrubberyForm};
	
	static const char* array_func[3] = {"president request", "robotomy request", "shrubbery request"};
	
	const int size = sizeof(array_func) / sizeof(array_func[0]);
	
	int i = 0;
	for (; i < size; i++){
		if (FormName == array_func[i])
			break;
	}
	if (i == size){//do not find
		std::cout << "No method has this name" << std::endl;
		throw NoMethod();
	}

	AForm* newF = (this->*funcs[i])(TargetName);
	std::cout << "Intern creates " << newF->getName() << std::endl;
	return (newF);
}