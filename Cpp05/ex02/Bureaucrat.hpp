/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 07:58:08 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/23 14:22:02 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>


#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#define RED_RESET(str) RED << (str) << RESET
#define GREEN_RESET(str) GREEN << (str) << RESET
#define BLUE_RESET(str) BLUE << (str) << RESET


class AForm;

class Bureaucrat{
	
	private:
		const std::string _name;
		int _grade; // between 150 the lowest and 1 the highest
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& other);
		~Bureaucrat();
		
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		void signAForm(AForm& Aform);
		void executeForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

// Bureaucrat.signform(name form)