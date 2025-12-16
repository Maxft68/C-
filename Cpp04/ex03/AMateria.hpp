/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:08:39 by max               #+#    #+#             */
/*   Updated: 2025/12/15 14:17:01 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "ICharacter.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

#define RED_RESET(str) RED << (str) << RESET
#define GREEN_RESET(str) GREEN << (str) << RESET

class ICharacter;

class AMateria{
	protected:
		std::string _type;
		bool is_use;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria& other);
		AMateria(std::string const & type);

		AMateria& operator=(const AMateria& other);
		std::string const & getType() const; //Return the materia type (Ice or Cure)
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		void set_is_use (bool);
		bool get_is_use (void);
};