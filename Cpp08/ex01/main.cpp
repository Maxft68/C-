/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:35 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/18 13:55:07 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>
#include <cstdlib>
#include <ctime>
#include <iostream>

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
            b.addNumber(i+5);
        }
        Span c = b;
        b.printContainer();
        c.printContainer();
        std::cout << b.shortestSpan() << std::endl;
        std::cout << b.longestSpan() << std::endl;
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        Span A(1000);
        std::deque<int> insert;
        for (int i = 0; i < 1000; ++i){
            insert.push_front(rand());
        }
        A.addNumberS(insert.begin(), insert.end());
        //A.printContainer();
        std::cout << A.shortestSpan() << std::endl;
        std::cout << A.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Fail here" << e.what() << std::endl;
    }    

}

void Span::addNumberS(std::deque<int>::iterator begin, std::deque<int>::iterator end){
    if (_N >= _Container.size() + std::distance(begin, end))
        _Container.insert(_Container.end(), begin, end);
    else
        throw SizeTooSmall();
}

// Should output:
// $> ./ex01
// 2
// 14
// $>