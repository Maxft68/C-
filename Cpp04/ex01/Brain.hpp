/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:55:50 by max               #+#    #+#             */
/*   Updated: 2025/11/28 15:59:32 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

class Brain{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& other);
		~Brain();
};