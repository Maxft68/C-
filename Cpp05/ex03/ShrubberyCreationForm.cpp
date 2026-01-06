/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 18:50:56 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/06 10:28:18 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default"){
	std::cout << GREEN_RESET("Default constructor ShrubberyCreationForm created") << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target){
	std::cout << GREEN_RESET("Constructor ShrubberyCreationForm with target created") << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy) : AForm(copy), _target(copy._target){
	std::cout << GREEN_RESET("Copy constructor ShrubberyCreationForm created") << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	if (this != &other){
		AForm::operator=(other);
		_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << RED_RESET("Destructor ShrubberyCreationForm called") << std::endl;
}

void ShrubberyCreationForm::beExecuted()const{
	std::string FileName = this->_target + "_shrubbery";
	
	std::ofstream outFile(FileName.c_str());
	if (outFile.is_open()){
		outFile << "       _-_" << std::endl;
		outFile << "    /~~   ~~\\" << std::endl;
		outFile << " /~~         ~~\\" << std::endl;
		outFile << "{    Happy ?    }" << std::endl;
		outFile << " \\  _-     -_  /" << std::endl;
		outFile << "   ~  \\ //  ~ " << std::endl;
		outFile << "      | |" << std::endl;
		outFile << "      | |" << std::endl;
		outFile << "     // \\\\" << std::endl;
		outFile.close();
	}
	else
		std::cout << "Can not create the outfile" << std::endl;
}
