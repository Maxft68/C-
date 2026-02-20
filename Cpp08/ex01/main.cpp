/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:09:35 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 13:14:20 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>
#include <cstdlib>
#include <ctime>
#include <iostream>

int main(){
    std::srand(std::time(0));
    
    // Span sp = Span(5); // TEST FROM SUBJECT
    // sp.addNumber(6);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    // std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;
    // return 0;

    // Should output:
    // $> ./ex01
    // 2
    // 14
    // $>
    

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
        Span b(20000);
        for (unsigned int i = 0; i < b.getSize(); i++){
            b.addNumber(i+(rand()%10000));
        }
        Span c = b;
        //b.printContainer();
        //c.printContainer();
        std::cout << "Shortest= " << b.shortestSpan() << std::endl;
        std::cout << "Longest= " << b.longestSpan() << std::endl;
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
        A.addNumberS(insert.begin(), insert.end()); // insert all in one time
        //A.printContainer();
        std::cout << "Shortest= " << A.shortestSpan() << std::endl;
        std::cout << "Longest= " << A.longestSpan() << std::endl;
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

