/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 08:33:45 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/18 15:28:30 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
	std::cout << GREEN_RESET("Default constructor bureaucrat created") << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    std::cout << GREEN_RESET("Constructor name+grade Bureaucrat ") << _name << " created with grade " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade){
	std::cout << GREEN_RESET("Copy constructor created") << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << RED_RESET("Destructor Bureaucrat") << std::endl;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
	if (this != &other){
		this->_grade = other._grade;
	}
	return(*this);
}

std::string Bureaucrat::getName() const{
	return(this->_name);
}

int Bureaucrat::getGrade() const{
	return(this->_grade);
}

void Bureaucrat::increment(){
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
	std::cout << *this ;
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too High!");
}

void Bureaucrat::decrement(){
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
	std::cout << *this ;
}

void Bureaucrat::signForm(Form& form){
	try{
		form.beSigned(*this);
	}
	catch (const std::exception& error){
		std::cerr << this->_name << " couldn't sign the form \"" << form.getName() << "\" because " << error.what() << std::endl;
	}
}



std::ostream& operator<<(std::ostream& os, const Bureaucrat& other){
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return(os);
}

