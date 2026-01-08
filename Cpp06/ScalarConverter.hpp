/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 10:46:11 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/08 14:53:43 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

class ScalarConverter{
	
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();

		void CastPseudoLitterals(std::string Pseudo);
		void CastChar();
		void CastInt();
		void CastFloat();
		void CastDouble();
	
	public:
		static void convert(const std::string Something);
};