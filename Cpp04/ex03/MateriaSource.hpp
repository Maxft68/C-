/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:40:37 by max               #+#    #+#             */
/*   Updated: 2025/12/15 14:51:11 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* _inventory[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copy);
        MateriaSource& operator=(const MateriaSource& other);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

