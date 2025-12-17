/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/17 17:43:41 by max              ###   ########.fr       */
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
        throw Form::GradeTooHighException();
    if (grade_required_to_sign > 150 || grade_to_execute > 150)
        throw Form::GradeTooLowException();
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

const int Form::getGradeRequired() const{
    return this->_grade_required_to_sign;
}

const int Form::getGradeToExecute() const{
    return this->_grade_to_execute;
}


std::ostream& operator<<(std::ostream& os, const Form& other){
	os << "The Form name is "<< other.getName() << "he is " << other.getSigned() 
    << "the grade to sign is "<< other.getGradeRequired() << "and the grade for \
    execute this form is " << other.getGradeToExecute() << std::endl;
	return(os);
}