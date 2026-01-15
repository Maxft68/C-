/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:55:21 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/15 14:59:22 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::addNumber(int n){
    std::deque<int>::iterator end = _Container.end();
    std::deque<int>::iterator begin = _Container.begin();

    if (_Container.size() == _N)
        throw NotEnoughPlace;
    n = _Container.back(); //voir cplusplus doc deque
}