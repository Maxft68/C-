/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/15 13:43:02 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _is_signed(false), _grade_required_to_sign(150), _grade_to_execute(150){
    std::cout << GREEN_RESET("Form Default operator constructed") << std::endl;
}

Form::Form(const std::string name, const int grade_required_to_sign, const int grade_to_execute) 
    : _name(name), _is_signed(false), _grade_required_to_sign(grade_required_to_sign), _grade_to_execute(grade_to_execute)
{
    if (grade_required_to_sign < 1 || grade_to_execute < 1)
        throw GradeTooHighException();
    if (grade_required_to_sign > 150 || grade_to_execute > 150)
        throw GradeTooLowException();
    std::cout << GREEN_RESET("Form Parameterized operator constructed") << std::endl;
}

Form::Form(const Form& copy) 
    : _name(copy._name), _is_signed(copy._is_signed), _grade_required_to_sign(copy._grade_required_to_sign), _grade_to_execute(copy._grade_to_execute){
    std::cout << GREEN_RESET("Form Copy operator constructed") << std::endl;
}

Form& Form::operator=(const Form& other){
    if (this != &other){
        this->_is_signed = other._is_signed;
        // const members can not be assigned
    }
    return *this;
}

Form::~Form(){
    std::cout << RED_RESET("Form destructed") << std::endl;
}

std::string Form::getName() const{
    return this->_name;
}

bool Form::getSigned() const{
    return this->_is_signed;
}

int Form::getGradeRequired() const{
    return this->_grade_required_to_sign;
}

int Form::getGradeToExecute() const{
    return this->_grade_to_execute;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= this->getGradeRequired()){
		if (getSigned() == false){
			std::cout << "beSigned-> " << bureaucrat.getName() << " signed the form \"" << this->getName() << "\"" << std::endl;
			this->_is_signed = true;
		}
		else
			throw IsAlreadySigned();
	}
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Form: Grade for the form is too high!";
}


const char* Form::GradeTooLowException::what() const throw() {
    return "Form: Grade for the form is too low!";
}

const char* Form::IsAlreadySigned::what() const throw(){
	return "Already signed";
}

std::ostream& operator<<(std::ostream& os, const Form& other){
	os << "The Form name is "<< other.getName() << std::endl << "His he signed? " <<std::boolalpha << other.getSigned() 
    << std::endl << "The grade to sign is "<< other.getGradeRequired() << " and the grade for \
execute this form is " << other.getGradeToExecute() << std::endl;
	return(os);
}