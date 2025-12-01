/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:56:44 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/12/01 13:56:29 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal{
	
	// protected:
	// 	std::string _type;

	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		virtual ~Dog();
		virtual void makeSound(void) const;
		// std::string getType() const;
};