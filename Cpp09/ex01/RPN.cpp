/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:44:11 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/16 19:15:11 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
//  void addToStack(int number);
//         void verifStack();                  //verif si au moins 1number dans stack
//         void takeTwoAndDo();                //recupere les deux dernier int et utilise l'operator
		
		
//         RPN();
//         ~RPN();
//         RPN(const RPN &copy);
//         RPN& operator=(const RPN &other);

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN &copy){
	(void)copy;
}

RPN& RPN::operator=(const RPN &other){
	(void) other;
	return *this;
}

void RPN::addToStack(int number){
	//std::cout << "adding" << number << "to stack\n";
	_numbers.push(number);
}

void RPN::verifStack(){
	if (_numbers.size() < 2)
		throw std::runtime_error("Error need at least 2 numbers");
}

void RPN::takeTwoAndDo(char op){ // a b -      b->a
	verifStack();
	long int b = this->_numbers.top();
	this->_numbers.pop();
	long int a = this->_numbers.top();
	this->_numbers.pop();
	
	switch(op){
		case '+':
			a = a + b;
			if (a > INT_MAX || a < INT_MIN)
				throw std::runtime_error("Error: addition overflow");
			_numbers.push(a);
			break;
		case '*':
			a = a * b;
			if (a > INT_MAX || a < INT_MIN)
				throw std::runtime_error("Error: multiplication overflow");
			_numbers.push(a);
			break;
		case '/':
			if (b != 0){
				a = a / b;
				if (a > INT_MAX || a < INT_MIN)
					throw std::runtime_error("Error: division overflow");
				_numbers.push(a);
			}
			else
				throw std::runtime_error("Error: / 0 is'nt possible thank you");
			break;
		case '-':
			a = a - b;
			if (a > INT_MAX || a < INT_MIN)
				throw std::runtime_error("Error: subtraction overflow");
			_numbers.push(a);
			break;
		default:
			throw std::runtime_error("Error: IMPOSSIBLE");
	}

	//a = a op b;
	
	
}

// void RPN::parseArgs(std::string args){
// 	for(int i = 0; args[i]; i++){
// 		if ((args[i] >= 0 && args[i] <= 9) || ((args[i] == '+' || args[i] == '-' || args[i] == '/' || args[i] == '*') && (i % 2 == 1))
// 			|| (args[i] == ' ' && (i % 2 == 0)))
// 			continue;
// 		else{
// 			std::cerr << "Error: bad format" << std::endl;
// 			throw std::runtime_error();
// 		}
// 	}
// }

int RPN::getTheAnswer(){
	if (this->_numbers.size() == 1)
		return(this->_numbers.top());
	else{
		throw std::runtime_error("Error: too much numbers, not enough operator");
	}
}