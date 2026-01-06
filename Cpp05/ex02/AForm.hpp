/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:14 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/06 14:23:37 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class AForm{
	
	private:
		const std::string _name;
		bool _is_signed;
		const int _grade_required_to_sign;
		const int _grade_to_execute;
	
	public:
		AForm();
		AForm(const std::string name, const int grade_required_to_sign, const int grade_to_execute);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& other);
		virtual ~AForm();
		
		std::string getName() const;
		bool getSigned() const;
		int getGradeRequired() const;
		int getGradeToExecute() const;
		
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class IsAlreadySigned : public std::exception{
			public:
				virtual const char * what() const throw();
		};
		class FormNotSigned : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		void beSigned(const Bureaucrat& Bureaucrat);
		void execute(Bureaucrat const& executor) const;
		virtual void beExecuted() const = 0;
};
std::ostream& operator<<(std::ostream& os, const AForm& other);