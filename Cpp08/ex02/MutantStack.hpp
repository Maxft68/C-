/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:19:04 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 13:40:41 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{ // = std::stack<T, std::deque<T>> 
    private:
    
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        
        iterator begin(){
            return (this->c.begin()); // = stack->deque.begin()
        };
        
        iterator end(){
            return(this->c.end());// = stack->deque.end() 'c' is the default container of stack
        };

        const_iterator cbegin() const{
            return (this->c.begin());
        };

        const_iterator cend() const{
            return (this->c.end());  
        };
        
        MutantStack() : std::stack<T>(){};
        MutantStack(MutantStack& copy) : std::stack<T>(copy){};
        MutantStack& operator=(MutantStack& other){
            if (this != &other)
                std::stack<T>::operator=(other);
            return (*this);
        };
        ~MutantStack(){};
        

};