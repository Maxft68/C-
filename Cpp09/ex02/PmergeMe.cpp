/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:52:30 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/19 18:14:05 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// int getJacobsthal(int i)
// {
//     return ((pow(2, i) - pow(-1, i)) / 3);
// }

std::vector<int> vJacobsthal(int size){
    //size = 20;
    std::cout << "size = " << size << std::endl;
    std::vector<int> jacobCase;
    std::vector<int> jacob;
    jacob.push_back(0);
    if (size <= 0){
        jacobCase.push_back(1);
        return jacobCase;
    }
    jacob.push_back(1);
    if (size == 1){
        jacobCase.push_back(1);
        return jacobCase;
    }
    int prev1 = 1;
    int prev2 = 0;
    int next = 1;
    while (next < size) {
        next = prev1 + 2 * prev2;
        if (next > size)
            break;
        jacob.push_back(next);
        prev2 = prev1;
        prev1 = next;
    }
    std::cout << "avec une size de " << size << " on a la suite jacob: ";
    for (size_t i = 0; i < jacob.size(); i++) {
        std::cout << jacob[i] << " ";
    }
    std::cout << "jacob fini, let's insert the rest" << std::endl;

    std::vector<int> newJacob;
    int prev = 0;
    for (size_t i = 0; i < jacob.size(); ++i) {
        newJacob.push_back(jacob[i]);
        for (int k = jacob[i] - 1; k > prev; --k) {
            newJacob.push_back(k);
        }
        prev = jacob[i];
    }
    for (int k = size; k > prev; --k) {
        newJacob.push_back(k);
    }
    newJacob.erase(newJacob.begin());
    newJacob.erase(newJacob.begin());
    std::cout << "newJacob=";
    for (size_t i = 0; i < newJacob.size(); i++) {
        std::cout << newJacob[i] << " ";
    }
    std::cout << std::endl;
    
    return newJacob;
}



void sortV(std::vector<int>& v){
    if (v.size() < 2)
        return;
    static int level = 0;
    int level_max = 0;
    
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
    if (v.size() % 2 != 0)
        little.push_back(v.back());
    std::cout << "Level: " << level <<std::endl;
    std::cout << "Big=    ";
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
    if (level_max < level)
        level_max = level;
        
    if (level == 10) // SECURITY
        return;
    std::vector<int> newBig;
    newBig = big;
    sortV(newBig);
    
    //INSERTION
    if (level_max == level)
        v = newBig;
    level--;
    std::cout << std::endl << std::endl;
    for (size_t x = 0; x < little.size(); x++){
        std::cout << "1litlle[x]= " << little[x] << " au level:" << level <<std::endl;
        std::cout << "1big[x]= " << big[x] << " au level:" << level <<std::endl;
    }
    std::cout << std::endl << std::endl;

    std::vector<int> constV = v;
    std::vector<int> jacob = vJacobsthal(big.size());

    for (int i = 0; i < (int)big.size(); i++){
        std::cout << "jacob[i] = " << jacob[i] << " big.size =" << (int)big.size() << " i = " << i << std::endl;
        std::vector<int>::iterator index_dans_big = std::find(big.begin(), big.end(), constV[jacob[i] - 1]);
        int index_big = index_dans_big - big.begin();
        int index_little = index_big;
        std::vector<int>::iterator index_constV_dans_V = std::find(v.begin(), v.end(), constV[jacob[i] - 1]);
        std::vector<int>::iterator insere_ici = std::upper_bound(v.begin(), index_constV_dans_V, little[index_little]);
        v.insert(insere_ici, little[index_little]);
        // trouver pair de v[x];
        // pair de v[x] = find dans big v[x] index dans big;
        // meme index dans little est a mettre upper_bound begin et v.begin + [x]
        if (little[index_little + 1] && !big[index_big + 1]){
            std::vector<int>::iterator insere_ici = std::upper_bound(v.begin(), v.end(), little[little.size() - 1]); 
            v.insert(insere_ici, little[little.size() - 1]);
        }
    }
    std::cout << "V apres upper bound= ";
    for (size_t b = 0; b < v.size(); b++){
        std::cout << v[b] << " ";
    }
    std::cout << std::endl;
    //v = big;
}



void sortD(std::deque<int>& d){
    (void) d;
    usleep(1);
}

//1 // 3 2 // 5 4 // 11 10 9 8 7 6 // 21 20 19 18 17 16 15 14 13 12//
//0 1 1 3 5 11 21 43 85 171 341 683

// J(0) = 0
// J(1) = 1
// J(n) = J(n-1) + 2 × J(n-2) pour n ≥ 2