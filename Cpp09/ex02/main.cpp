/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:45:58 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 09:48:15 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc < 2){
        std::cerr << "Error: Give me argument please !!" << std::endl;
        return(-1);
    }

    std::vector<int> v;
    std::deque<int> d;
    int number;
    int i = 1;
    for (;argv[i]; i++){
        std::istringstream iss(argv[i]);
        if (!(iss>> number) || !iss.eof() || number < 0){
            return(std::cerr << "Error: not valid number" << std::endl, -1);
        }
        else{
            for (int j = 0; j + 1 < i; j++){
                if(v[j] == number)
                    return(std::cerr << "Error: There is at least the same number twice" << std::endl, -1);
            }
                v.push_back(number);
                d.push_back(number);
        }
    }
    
    std::cout << "Before: ";
    for (int j = 0; j + 1 < i; j++){
        std::cout << v[j] << " ";
    }
    std::cout << std::endl;
    
    struct timeval beginV;
    struct timeval endV;
    gettimeofday(&beginV, NULL);
    sortV(v);
    gettimeofday(&endV, NULL);
    std::cout << "After:  ";
    for (size_t b = 0; b < v.size(); b++){
        std::cout << v[b] << " ";
    }
    std::cout << std::endl;
    long timeV = endV.tv_usec - beginV.tv_usec;
    
    struct timeval beginD;
    struct timeval endD;
    gettimeofday(&beginD, NULL);
    sortD(d);
    gettimeofday(&endD, NULL);
    long timeD = (endD.tv_sec - beginD.tv_sec) * 1000000L + (endD.tv_usec - beginD.tv_usec);
    std::cout << "Time to process a range of " << i - 1 << " elements with std::vector: " << timeV << " us" << std::endl;
    std::cout << "Time to process a range of " << i - 1 << " elements with std::deque:  " << timeD << " us" << std::endl;
}