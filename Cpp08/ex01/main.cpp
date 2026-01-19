/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:35 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/19 08:59:28 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
    std::srand(std::time(0));
    
    // Span sp = Span(5);
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    // return 0;

    

    std::cout << std::endl << std::endl << "----------TEST 1----------" << std::endl;
    try {
        Span a;
        a.addNumber(10);
    } 
    catch (std::exception &e){
        std::cout << "Fail 1 " << e.what() << std::endl;
    }



    std::cout << std::endl << std::endl << "----------TEST 2----------" << std::endl;
    try {
        Span b(5);
        for (unsigned int i = 0; i < b.getSize(); i++){
            b.addNumber(i+(rand()%10));
        }
        Span c = b;
        b.printContainer();
        c.printContainer();
        std::cout << b.shortestSpan() << std::endl;
        std::cout << b.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Fail 2 " << e.what() << std::endl;
    }



    
    std::cout << std::endl << std::endl << "----------TEST 3----------" << std::endl;
    try{
        Span A(1000);
        std::deque<int> insert;
        for (int i = 0; i < 1000; ++i){
            insert.push_front(rand()%1000);
        }
        A.addNumberS(insert.begin(), insert.end());
        //A.printContainer();
        std::cout << A.shortestSpan() << std::endl;
        std::cout << A.longestSpan() << std::endl;
    }
    catch (std::exception &e){
        std::cout << "Fail 3 " << e.what() << std::endl;
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