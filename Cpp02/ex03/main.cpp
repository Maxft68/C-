/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 07:35:40 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/25 12:16:09 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {

    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);


    Point inside(7.5f, 4.998f); //limit 5.0019529f outside //5.0019528 on edge //exactly 5.0f //inside 4.998f
    std::cout << "Inside (we want 1) : " << bsp(a, b, c, inside) << std::endl << std::endl;

    
    Point outside(10.0f, 0.1f);
    std::cout << "Outside (we want 0) : " << bsp(a, b, c, outside) << std::endl << std::endl;


    Point onEdge(5.0f, 0.0f); // we want: 0
    std::cout << "On edge AB (we want 0) : " << bsp(a, b, c, onEdge) << std::endl << std::endl;


    Point onVertex(0.0f, 0.0f);
    std::cout << "On vertex A (we want 0) : " << bsp(a, b, c, onVertex) << std::endl << std::endl;


    Point dA(0.0f, 0.0f);
    Point dB(5.0f, 0.0f);
    Point dC(10.0f, 0.0f);
    Point onthefaketriangle(2.5f, 0.00f); // we want: 0
    std::cout << "we want 0 : " << bsp(dA, dB, dC, onthefaketriangle) << std::endl << std::endl;

    return 0;
}
