/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:05:39 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/20 13:07:14 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
/***************************************************************************************************
static_cast:
Use this to change a value from one type to another when the types are related 
	(like int to float, or between classes that are connected). The check is done by the compiler,
	not when the program runs.

reinterpret_cast:
Use this for changing one type to a very different type (like a pointer to an int).
	This is risky and should only be used if you really know what you are doing.
	The result can be wrong or not make sense.

dynamic_cast:
Use this to change a pointer or reference from one class to another when the classes use inheritance
	and have at least one virtual function. The program checks if the change is possible when it runs 
	(if not, you get nullptr or an exception).
****************************************************************************************************/

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& copy) {
	(void)copy;
}

Serializer& Serializer::operator=(const Serializer& other) {
	(void)other;
	return *this;
}

Serializer::~Serializer() {}


uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}


Data* Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}