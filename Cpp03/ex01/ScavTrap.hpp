/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:25:42 by max               #+#    #+#             */
/*   Updated: 2025/11/26 13:57:50 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "ClapTrap.hpp"

class ScavTrap : protected ClapTrap {
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
        
        void guardGate();
        void attack(const std::string& target);
};



