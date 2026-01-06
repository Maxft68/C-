/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:40:01 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/06 14:57:13 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	
	private:

	public:
		Intern();
		Intern(const Intern& copy);
		Intern& operator=(const Intern& other);
		~Intern();
		
		AForm* createPresidentForm(const std::string& target);
		AForm* createRobotomyForm(const std::string& target);
		AForm* createShrubberyForm(const std::string& target);
		
		AForm* makeForm(const std::string& FormName, const std::string& TargetName);

		class NoMethod : public std::exception{
			public:
				virtual const char* what() const throw();
		};
};