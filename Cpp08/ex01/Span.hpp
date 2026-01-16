/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:14:07 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/16 18:17:47 by max              ###   ########.fr       */
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
        template<typename T>
        void addNumberS(T num);
        
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
                virtual const char* what() const throw(){
                }
        };
};

