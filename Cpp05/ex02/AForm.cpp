/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/18 20:24:49 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aform.hpp"

Aform::Aform() : _name("Default"), _is_signed(false), _grade_required_to_sign(150), _grade_to_execute(150){
    std::cout << GREEN_RESET("Aform Default operator constructed") << std::endl;
}

Aform::Aform(const std::string name, const int grade_required_to_sign, const int grade_to_execute) 
    : _name(name), _is_signed(false), _grade_required_to_sign(grade_required_to_sign), _grade_to_execute(grade_to_execute)
{
    if (grade_required_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_required_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
    std::cout << GREEN_RESET("Aform Parameterized operator constructed") << std::endl;
}

Aform::Aform(const Aform& copy) 
    : _name(copy._name), _is_signed(copy._is_signed), _grade_required_to_sign(copy._grade_required_to_sign), _grade_to_execute(copy._grade_to_execute){
    std::cout << GREEN_RESET("Aform Copy operator constructed") << std::endl;
}

Aform& Aform::operator=(const Aform& other){
    if (this != &other){
        this->_is_signed = other._is_signed;
        // const members can not be assigned
    }
    return *this;
}

Aform::~Aform(){
    std::cout << RED_RESET("Aform destructed") << std::endl;
}

std::string Aform::getName() const{
    return this->_name;
}

bool Aform::getSigned() const{
    return this->_is_signed;
}

int Aform::getGradeRequired() const{
    return this->_grade_required_to_sign;
}

int Aform::getGradeToExecute() const{
    return this->_grade_to_execute;
}

void Aform::beSigned(const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= this->getGradeRequired()){
		if (getSigned() == false){
			std::cout << "beSigned-> " << bureaucrat.getName() << " signed the Aform \"" << this->getName() << "\"" << std::endl;
			this->_is_signed = true;
		}
		else
			throw IsAlreadySigned();
	}
	else
		throw GradeTooLowException();
}

const char* Aform::GradeTooHighException::what() const throw() {
    return "Aform: Grade for the Aform is too high!";
}


const char* Aform::GradeTooLowException::what() const throw() {
    return "Aform: Grade for the Aform is too low!";
}

const char* Aform::IsAlreadySigned::what() const throw(){
	return "Already signed";
}

std::ostream& operator<<(std::ostream& os, const Aform& other){
	os << "The Aform name is "<< other.getName() << ". His he signed? " <<std::boolalpha << other.getSigned() 
    << ". The grade to sign is "<< other.getGradeRequired() << " and the grade for \
execute this Aform is " << other.getGradeToExecute() << std::endl;
	return(os);
}