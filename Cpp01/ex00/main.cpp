/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:35:25 by max               #+#    #+#             */
/*   Updated: 2025/12/08 14:06:15 by mdsiurds         ###   ########.fr       */
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
