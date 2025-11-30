/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:56:44 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/30 17:56:34 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain* _brain;
		
	protected:
		std::string _type;

	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		virtual ~Dog();
		virtual void makeSound(void) const;
		std::string getType() const;
		Brain* getBrain() const;
};