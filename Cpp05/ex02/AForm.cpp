/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/19 07:47:43 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _is_signed(false), _grade_required_to_sign(150), _grade_to_execute(150){
    std::cout << GREEN_RESET("AForm Default operator constructed") << std::endl;
}

AForm::AForm(const std::string name, const int grade_required_to_sign, const int grade_to_execute) 
    : _name(name), _is_signed(false), _grade_required_to_sign(grade_required_to_sign), _grade_to_execute(grade_to_execute)
{
    if (grade_required_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_required_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
    std::cout << GREEN_RESET("AForm Parameterized operator constructed") << std::endl;
}

AForm::AForm(const AForm& copy) 
    : _name(copy._name), _is_signed(copy._is_signed), _grade_required_to_sign(copy._grade_required_to_sign), _grade_to_execute(copy._grade_to_execute){
    std::cout << GREEN_RESET("AForm Copy operator constructed") << std::endl;
}

AForm& AForm::operator=(const AForm& other){
    if (this != &other){
        this->_is_signed = other._is_signed;
        // const members can not be assigned
    }
    return *this;
}

AForm::~AForm(){
    std::cout << RED_RESET("AForm destructed") << std::endl;
}

std::string AForm::getName() const{
    return this->_name;
}

bool AForm::getSigned() const{
    return this->_is_signed;
}

int AForm::getGradeRequired() const{
    return this->_grade_required_to_sign;
}

int AForm::getGradeToExecute() const{
    return this->_grade_to_execute;
}

void AForm::beSigned(const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= this->getGradeRequired()){
		if (getSigned() == false){
			std::cout << "beSigned-> " << bureaucrat.getName() << " signed the AForm \"" << this->getName() << "\"" << std::endl;
			this->_is_signed = true;
		}
		else
			throw IsAlreadySigned();
	}
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "AForm: Grade for the AForm is too high!";
}


const char* AForm::GradeTooLowException::what() const throw() {
    return "AForm: Grade for the AForm is too low!";
}

const char* AForm::IsAlreadySigned::what() const throw(){
	return "Already signed";
}


void AForm::execute(Bureaucrat const& executor){
	if (this->_is_signed = false)
		throw FormNotSigned();
	if (this->_grade_to_execute > executor.getGrade)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& other){
	os << "The AForm name is "<< other.getName() << ". His he signed? " <<std::boolalpha << other.getSigned() 
    << ". The grade to sign is "<< other.getGradeRequired() << " and the grade for \
execute this AForm is " << other.getGradeToExecute() << std::endl;
	return(os);
}