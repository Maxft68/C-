/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:55:21 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/19 08:15:05 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>

Span::Span() : _N(0){}

Span::Span(unsigned int N) : _N(N) {}

Span& Span::operator=(const Span& other){
    if (this != &other){
        this->_N = other._N;
        this->_Container = other._Container;
    }
    return(*this);
}

Span::Span(const Span &other) : _N(other._N), _Container(other._Container){}

Span::~Span(){}

unsigned int Span::getSize(){
    return this->_N;
}

void Span::printContainer(){
    std::deque<int>::iterator iter = _Container.begin();

    for (; iter != _Container.end(); iter++){
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

void Span::addNumber(int n){
    // std::deque<int>::iterator end = _Container.end();
    // std::deque<int>::iterator begin = _Container.begin();

    if (_Container.size() == _N)
        throw NotEnoughPlace();
    else
        _Container.push_front(n);
}

int Span::shortestSpan(){
    if (_Container.size() < 2)
        throw SizeTooSmall();
        
    std::sort(_Container.begin(), _Container.end());
    int minSpan = INT_MAX;
    
    for (size_t i = 0; i < _Container.size() - 1; i++){
        int span = _Container[i + 1] - _Container[i];
        if (span < minSpan)
            minSpan = span;
    }
    return (minSpan);
}

/* int Span::longestSpan(){
    if (_Container.size() < 2)
        throw SizeTooSmall();
        
    std::sort(_Container.begin(), _Container.end());
    
    int diff = _Container[_Container.size() - 1] - *_Container.begin();
    //or 
    // diff = *std::max_element(_Container.begin(), _Container.end()) - *std::min_element(_Container.begin(), _Container.end());

    return(diff);
} */


int Span::longestSpan(){
    if (_Container.size() < 2)
        throw SizeTooSmall();
    long min = *std::min_element(_Container.begin(), _Container.end());
    long max = *std::max_element(_Container.begin(), _Container.end());
    return(max - min);
}

const char* Span::NotEnoughPlace::what() const throw(){
    return ("Not Enough place...");
}

const char* Span::SizeTooSmall::what() const throw(){
    return ("We need at least 2 values for find a Span");
}