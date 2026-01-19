/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:14:07 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/19 08:29:46 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <deque>
#include <climits>

class Span {
    private:
        unsigned int _N;
        std::deque<int> _Container;
    
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other);

        void addNumber(int n);
        void addNumberS(std::deque<int>::iterator begin, std::deque<int>::iterator end);
        
        int shortestSpan();
        int longestSpan();
        unsigned int getSize();
        void printContainer();

        class SizeTooSmall : public std::exception{
            public:
                virtual const char* what() const throw();
        };

        class NotEnoughPlace : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

/* template<typename iterator>
void Span::addNumberS(iterator begin, iterator end){
    if (_N >= _Container.size() + std::distance(begin, end))
        _Container.insert(_Container.end(), begin, end);
    else
        throw SizeTooSmall();
} */

