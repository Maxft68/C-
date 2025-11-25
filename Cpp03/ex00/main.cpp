/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:57:25 by max               #+#    #+#             */
/*   Updated: 2025/11/25 15:14:34 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("Bob");
    
    clap.attack("Alice");
    clap.attack("Alice2");
    clap.attack("Alice3");
    clap.attack("Alice4");
    clap.attack("Alice5");
    clap.attack("Alice6");
    clap.attack("Alice7");
    clap.attack("Alice8");
    clap.attack("Alice9");
    clap.attack("Alice10");
    clap.attack("Alice11");
    
    clap.beRepaired(42);
    clap.attack("Bob");
    clap.takeDamage(50);
    clap.beRepaired(10);
    return 0;
}   