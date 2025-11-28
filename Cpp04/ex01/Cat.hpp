/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:23:46 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/28 15:56:39 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal{
	
	protected:
		std::string _type;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		virtual ~Cat();
		virtual void makeSound(void) const;
		std::string getType() const;
};