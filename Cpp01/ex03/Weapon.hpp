/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:48:31 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/03 17:30:34 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Weapon {
	private:
		std::string _type;
	
	public:
		Weapon();
		~Weapon();
		Weapon(std::string type_of_weapon);
		
		const std::string &getType() const;
		void setType(std::string new_value);

};