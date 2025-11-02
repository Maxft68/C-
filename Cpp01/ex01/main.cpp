/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:35:25 by max               #+#    #+#             */
/*   Updated: 2025/11/02 20:33:27 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *horde = zombieHorde(5, "Michou");
    std::cout << "Horde created." << std::endl;
    horde[0].announce();
    horde[2].announce();
    horde[4].announce();
    (void) horde;
    //delete[] horde; //for the leaks take off the comment
    std::cout << "End of program, all zombies should be destroyed with fire now." << std::endl;
    return 0;
}
