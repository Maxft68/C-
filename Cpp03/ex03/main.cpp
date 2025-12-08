/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:57:25 by max               #+#    #+#             */
/*   Updated: 2025/12/08 10:13:40 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

	// DiamondTrap trap;
	// std::cout << std::endl;
	// trap.whoAmI();
	// std::cout << std::endl;
	
	{
		ClapTrap sponge("Bob");
		sponge.attack("Alice1");
		std::cout << std::endl;
	}

	// ScavTrap scav("Scavy");
	// scav.attack("Bob");
	// scav.guardGate();
	// std::cout << std::endl;
	
	// {
	// 	FragTrap frag("Frag");
	// 	frag.attack("bernard");
	// }
	// std::cout << std::endl;
	
	return 0;
}