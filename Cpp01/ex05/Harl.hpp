/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 08:42:31 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/17 14:48:37 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Harl{

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
	
	public:
	Harl();
	~Harl();
	void complain(std::string level);
};