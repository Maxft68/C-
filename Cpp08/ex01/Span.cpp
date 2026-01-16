/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:55:21 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/16 12:24:41 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <deque>

Span::Span()
Span::Span(unsigned int N) : _N(N) {}

Span& Span::operator=(const Span& other){
    if (this != &other)
        this->_N = other._N;
        this->_Container = other._Container;
    return(*this);
}

Span::Span(const Span &other) : _N(other._N), _Container(other._Container){}

Span::~Span(){}

void Span::addNumber(int n){
    // std::deque<int>::iterator end = _Container.end();
    // std::deque<int>::iterator begin = _Container.begin();

    if (_Container.size() == _N)
        throw NotEnoughPlace();
    else
        _Container.push_front(n);
}

shortestSpan()

longestSpan()