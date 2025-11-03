/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:49:58 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/03 17:26:02 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class HumanA {
	private:
		std::string _name;
		std::string _weapon_type;
	
	public:
		HumanA();
		~HumanA();

};