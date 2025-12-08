/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 17:39:25 by max               #+#    #+#             */
/*   Updated: 2025/12/08 14:19:28 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name ){
    if (N <= 0)
        return (NULL);
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++){
        std::ostringstream nickname;
        nickname << name << (i + 0);
        horde[i].setName(nickname.str());
        horde[i].announce();
    }
    return (horde);
}