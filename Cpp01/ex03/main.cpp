/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:27:23 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/05 12:07:31 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	std::cout << "-----------------DESTRUCTION--REF--------------" << std::endl;
	}
	
	std::cout << "-----------------------------------------------" << std::endl <<std::endl;
	
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.attack();// without weapon
	jim.setWeapon(&club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	std::cout << "---------------DESTRUCTION POINTER ?! NO-------" << std::endl;
	}
	return 0;
}