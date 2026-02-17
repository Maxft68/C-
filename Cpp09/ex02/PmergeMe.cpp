/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:52:30 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/17 20:46:01 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void sortV(std::vector<int>& v){
    if (v.size() < 2)
        return;
    static int level = 0;

    //std::vector<std::pair<int, int> > pair; //A IMPLEMENTER PEUTETRE
    
    std::vector<int> main;
    std::vector<int> big;
    std::vector<int> little;
    for(size_t i = 0; i < v.size() - 1; i += 2){
        if (v[i] > v[i + 1]){
            big.push_back(v[i]);
            little.push_back(v[i + 1]);
        }
        else{
            big.push_back(v[i + 1]);
            little.push_back(v[i]);
        }
    }
    std::cout << "Level: " << level <<std::endl;
    std::cout << "Big= ";
    for (size_t b = 0; b < big.size(); b++){
        std::cout << big[b] << " ";
    }
    std::cout << std::endl;

    std::cout << "little= ";
    for (size_t b = 0; b < little.size(); b++){
        std::cout << little[b] << " ";
    }
    std::cout << std::endl << std::endl;

    
    level++;
    if (level == 10) // SECURITY
        return;
    sortV(big);
    

    //INSERTION

    //std::upper_bound(big.begin(), big.end() ,little.begin());
    std::upper_bound(big.begin(), big.end() ,little[0]);
    std::cout << "little[1] du level" << level << "= " << little[0] << std::endl;
    std::cout << "Big apres upper bound= ";
    for (size_t b = 0; b < big.size(); b++){
        std::cout << big[b] << " ";
    }
    std::cout << std::endl;
}

void sortD(std::deque<int>& d){
    (void) d;
    usleep(1);
}