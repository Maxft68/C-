/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:35:25 by max               #+#    #+#             */
/*   Updated: 2025/11/02 17:21:13 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *Z1 = newZombie("Kevin");
    //Z1->announce();
    delete Z1;
    randomChump("Bob");
    std::cout << "End of program, all zombies should be destroyed with fire now." << std::endl;
    return 0;
}
