/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:20:32 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/16 17:08:59 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <stdexcept>
#include <limits>
#include <limits.h>

class RPN{
    private:
        std::stack<int> _numbers;
        
    public:
        //void parseArgs (std::string args);
        void addToStack(int number);
        void verifStack();                  //verif si au moins 1number dans stack
        void takeTwoAndDo(char op);   //recupere les deux dernier int et utilise l'operator
        int getTheAnswer();
        
        RPN();
        ~RPN();
        RPN(const RPN &copy);
        RPN& operator=(const RPN &other);
};