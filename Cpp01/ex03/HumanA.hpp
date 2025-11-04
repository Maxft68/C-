/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:49:58 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/04 15:35:29 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon		&_weapon;
	
	public:
		HumanA(std::string name,  Weapon &weapon);
		~HumanA();
		void attack();

};
