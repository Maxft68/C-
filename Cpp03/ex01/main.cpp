/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:57:25 by max               #+#    #+#             */
/*   Updated: 2025/11/26 15:54:53 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    
    ClapTrap sponge("Bob");
    sponge.attack("Alice1");
    std::cout << std::endl;
    
    ScavTrap scav("Scavy");
    scav.attack("Bob");
    scav.guardGate();
    
    return 0;
}