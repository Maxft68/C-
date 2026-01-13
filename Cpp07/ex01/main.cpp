/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:22:43 by max               #+#    #+#             */
/*   Updated: 2026/01/13 11:18:43 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>


void increment(int &n) {
    n++;
}

template <typename T>
void printElement(T &element){
	std::cout << element << " ";
}

int main() {
    std::cout <<std::endl << "--- Test 1: Int Array ---" << std::endl;
    int array[] = {1, 2, 3, 4, 5};
    size_t len = 5;

    std::cout << "Original: ";
    iter(array, len, printElement<int>);
    std::cout << std::endl;

    std::cout << "Incrementing..." << std::endl;
    iter(array, len, increment);

    std::cout << "Modified: ";
    iter(array, len, printElement<int>);
    std::cout << std::endl << std::endl;

    std::cout << "--- Test 2: String Array ---" << std::endl;
    std::string strArray[] = {"Hello", "World", "from", "iter"};
	
	size_t verif = sizeof(strArray) / sizeof(strArray[0]);
    iter(strArray, verif, printElement<std::string>);
	//iter(strArray, strLen, "Hello");
    std::cout << std::endl << std::endl;

    return 0;
}
