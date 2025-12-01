/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:13:54 by max               #+#    #+#             */
/*   Updated: 2025/12/01 17:14:18 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria{
    public:
        Ice();
        Ice(const Ice& copy);
        Ice& operator=(const Ice& other);
        virtual ~Ice();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};