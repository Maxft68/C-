/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:23:46 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/30 17:55:29 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{

	protected:
		std::string _type;
		
	private:
		Brain* _brain;

	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		virtual ~Cat();
		virtual void makeSound(void) const;
		std::string getType() const;
		Brain* getBrain() const;
};