/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:14:07 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/15 12:56:25 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <deque>

class Span {
    private:
        unsigned int _N;
        std::deque<int> _Container;
    
    public:
        Span(unsigned int n);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

        void addNumber(int n);

        class NotEnoughPLace : public std::exception{
            public:
                virtual const char* what() const throw();
        }
};

void Span::addNumber(int n){
    std::deque<int>::iterator end = _Container.end();
    std::deque<int>::iterator begin = _Container.begin();

    _Container.back
    if ()
        throw NotEnoughPlace;
}