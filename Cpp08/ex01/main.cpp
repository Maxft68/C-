/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:35 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/16 15:39:27 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    // return 0;

    Span a;

    std::cout << a.getSize() << std::endl;
    a.printContainer();

    try {
        a.addNumber(10);
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    
    try {
        Span b(5);
        for (unsigned int i = 0; i < b.getSize(); i++){
            b.addNumber(i);
        }
        Span c = b;
        b.printContainer();
        c.printContainer();
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

}

// Should output:
// $> ./ex01
// 2
// 14
// $>