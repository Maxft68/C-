/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 07:35:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/24 18:09:00 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    // triangle principal
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);

    // cas 1 : point strictement à l'intérieur
    Point inside(5.0f, 4.0f); // attendu: 1
    std::cout << "Inside (attendu 1) : " << bsp(a, b, c, inside) << std::endl;

    // cas 2 : point à l'extérieur
    Point outside(15.0f, 5.0f); // attendu: 0
    std::cout << "Outside (attendu 0) : " << bsp(a, b, c, outside) << std::endl;

    // cas 3 : point sur un côté (milieu de AB)
    Point onEdge(5.0f, 0.0f); // attendu: 0
    std::cout << "On edge AB (attendu 0) : " << bsp(a, b, c, onEdge) << std::endl;

    // cas 4 : point sur un sommet
    Point onVertex(0.0f, 0.0f); // attendu: 0
    std::cout << "On vertex A (attendu 0) : " << bsp(a, b, c, onVertex) << std::endl;

    // cas 5 : triangle dégénéré (points colinéaires)
    Point dA(0.0f, 0.0f);
    Point dB(5.0f, 0.0f);
    Point dC(10.0f, 0.0f);
    Point onDegenerate(2.5f, 0.0f); // attendu: 0
    std::cout << "Degenerate triangle (attendu 0) : " << bsp(dA, dB, dC, onDegenerate) << std::endl;

    // cas 6 : point très proche du côté (vérifier tolérance)
    Point nearEdge(5.0f, 0.000005f);
    std::cout << "Near edge (vérifier tolérance) : " << bsp(a, b, c, nearEdge) << std::endl;

    return 0;
}
