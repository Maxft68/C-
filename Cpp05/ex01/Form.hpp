/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:14 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/17 19:49:34 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form{
	
	private:
		const std::string _name;
		bool _is_signed;
		const int _grade_required_to_sign;
		const int _grade_to_execute;
	
	public:
		Form();
		Form(const std::string name, const int grade_required_to_sign, const int grade_to_execute);
		Form(const Form& copy);
		Form& operator=(const Form& other);
		~Form();
		
		std::string getName() const;
		bool getSigned() const;
		const int getGradeRequired() const;
		const int getGradeToExecute() const;
		
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& os, const Form& other);