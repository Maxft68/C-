/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:01:44 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/25 19:20:53 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contact[8];
		/* int index; */
		
	public:

		PhoneBook();
		~PhoneBook();
		void ADD();
		void SEARCH();
		void EXIT();
		
};