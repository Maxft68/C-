/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:44:11 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 11:10:22 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

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
	_numbers.push(number);
}

void RPN::verifStack(){
	if (_numbers.size() < 2)
		throw std::runtime_error("Error need at least 2 numbers");
}

void RPN::takeTwoAndDo(char op){ // a b -      b -> a
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


int RPN::getTheAnswer(){
	if (this->_numbers.size() == 1)
		return(this->_numbers.top());
	else{
		throw std::runtime_error("Error: too much numbers, not enough operator");
	}
}