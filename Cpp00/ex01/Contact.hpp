/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 10:39:03 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/25 18:17:57 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Contact{
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _PhoneNumber;
		std::string _NickName;
		std::string _DarkestSecret;
		
	public:
		Contact();
		~Contact();
		void setFirstName(std::string str);
		void setName(std::string str);
		void setNumber(std::string str);
		void setNickName(std::string str);
		void setSecret(std::string str);

		void getFirstName(int index);
		void getName(int index);
		void getNumber(int index);
		void getNickName(int index);
		void getSecret(int index);
};