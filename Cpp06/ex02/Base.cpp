/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:42:11 by max               #+#    #+#             */
/*   Updated: 2026/01/10 18:52:34 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

Base::Base() {
}

Base::Base(const Base& other) {
	(void)other;
}

Base& Base::operator=(const Base& other) {
	(void)other;
	return *this;
}

Base::~Base() {
	
}
