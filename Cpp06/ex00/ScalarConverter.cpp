/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:33:19 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/19 16:15:09 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <climits>
#include <limits>
#include <cmath>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {}


void ScalarConverter::convert(const std::string Something) {
	if (Something.length() == 1 && !std::isdigit(Something[0])) {
		char c = Something[0];
		if (std::isprint(c))
			std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
		else
			std::cout <<"Not displayable" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}

	char* end;
	double value = std::strtod(Something.c_str(), &end);

	if (*end != 0 && (*end != 'f' || *(end + 1) != 0)) { //if *end is not at the end or not "f\0"
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	// Char
	std::cout << "char: ";
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127) {
		std::cout << "impossible" << std::endl;
	} else if (std::isprint(static_cast<char>(value))) {
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	} else {
		std::cout << "Not displayable" << std::endl;
	}

	// Int
	std::cout << "int: ";
	if (std::isnan(value) || std::isinf(value) || value < INT_MIN || value > INT_MAX) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << static_cast<int>(value) << std::endl;
	}

	// Float
	std::cout << "float: ";
	float f = static_cast<float>(value);
	if (std::isnan(f) || std::isinf(f)) {
		std::cout << f << "f" << std::endl;
	} else {
		if (f - static_cast<int>(f) == 0)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl; // if value is 4.5 don't add "".0"
	}

	// Double
	std::cout << "double: ";
	if (std::isnan(value) || std::isinf(value)) {
		std::cout << value << std::endl;
	} else {
		if (value - static_cast<int>(value) == 0)
			std::cout << value << ".0" << std::endl;
		else
			std::cout << value << "" << std::endl;
	}
}
