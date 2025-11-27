/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:57:25 by max               #+#    #+#             */
/*   Updated: 2025/11/27 12:40:32 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

	DiamondTrap trap("Trap");
	trap.whoAmI();
	std::cout << std::endl;
	
	// {
	// 	ClapTrap sponge("Bob");
	// 	sponge.attack("Alice1");
	// 	std::cout << std::endl;
	// }

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