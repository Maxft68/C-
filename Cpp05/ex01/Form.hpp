/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:03:14 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/16 14:46:25 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form{
	
	private:
		const std::string name;
		bool is_signed;
		const int grade_required;
		const int grade_to_execute;
		
		std::string getName();
		bool getSigned();
		const int getGradeRequired();
		const int getGradeToExecute();
		
};
std::ostream& operator<<(std::ostream& os, const Form& other){
	os << other.getName() << ", bureaucrat grade " << other.getGrade() << std::endl;
	return(os);
} 