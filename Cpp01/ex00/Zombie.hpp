/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:50:22 by max               #+#    #+#             */
/*   Updated: 2025/11/02 16:55:24 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce (void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
