/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:33:19 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/08 14:48:59 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {}


void ScalarConverter::CastPseudoLitterals(std::string Pseudo){
	
}

void ScalarConverter::convert(const std::string Something) {
	if (Something == "-inf" || Something == "+inf" || Something == "nan" || Something == "-inff" || Something == "+inff" || Something == "nanf")
		CastPseudoLitterals(Something);
	int i = 0;
	int point = 0;
	int Ifloat = 0;
	int invalid = 0;
	int len = Something.length();
	
	for (i = 0; Something[i]; i++){
		if (Something[i] == '.')
			point = 1;
		if (Something[i] == 'f' && len - 1 != i)
			
	}
	if (i == 1){
		if (!std::isdigit(Something[0]))
			//ISchar;
			//break;
		else
			//ISnum;
	}
}
