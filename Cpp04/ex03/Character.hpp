/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 23:32:56 by max               #+#    #+#             */
/*   Updated: 2025/12/15 13:09:17 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Character : public ICharacter{
    private:
        std::string _name;
        AMateria* _inventory[4];
		AMateria* _floor;
    public:
        Character();
        Character(std::string name);
        Character(const Character& copy);
        Character& operator=(const Character& other);
        virtual ~Character();

        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};