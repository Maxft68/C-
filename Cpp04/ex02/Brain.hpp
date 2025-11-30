/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:55:50 by max               #+#    #+#             */
/*   Updated: 2025/11/30 17:55:11 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"

#define BRAIN_IDEAS_SIZE 100

class Brain{
	private:
		std::string ideas[BRAIN_IDEAS_SIZE];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& other);
		~Brain();
		
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};