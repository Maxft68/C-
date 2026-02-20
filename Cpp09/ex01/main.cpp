/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:45:58 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 09:19:00 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cerr << "Error: Format need to be only one argument" << std::endl;
        return(-1);
    }
    

    try{
        RPN rpn;
        std::string arg = argv[1];
        int index_int = -2;
        for(int i = 0; arg[i]; i++){
            if (isdigit(arg[i])){
                rpn.addToStack((arg[i] - '0'));
                if (i - index_int == 1)
                    throw std::runtime_error("Error: Only numbers between 0 and 9");
                index_int = i;
            }
            else if ((arg[i] == '+' || arg[i] == '-' || arg[i] == '/' || arg[i] == '*'))
                rpn.takeTwoAndDo(arg[i]);
            else if (arg[i] == ' ')
                continue;
            else
                throw std::runtime_error("Error: Use only digit");

        }
        std::cout << rpn.getTheAnswer() << std::endl;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << std::endl;
    }
}