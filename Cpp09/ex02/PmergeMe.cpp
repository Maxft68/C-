/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:52:30 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/18 17:26:59 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void sortV(std::vector<int>& v){
    if (v.size() < 2)
        return;
    static int level = 0;
    int level_max = 0;
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
    for (size_t jacobsthal = 0; jacobsthal < big.size(); jacobsthal++){

        std::vector<int>::iterator index_dans_big = std::find(big.begin(), big.end(), constV[jacobsthal]);
        int index_big = index_dans_big - big.begin();
        int index_little = index_big;
        std::vector<int>::iterator index_constV_dans_V = std::find(v.begin(), v.end(), constV[jacobsthal]);
        std::vector<int>::iterator insere_ici = std::upper_bound(v.begin(), index_constV_dans_V, little[index_little]);
        v.insert(insere_ici, little[index_little]);
        // trouver pair de v[x];
        // pair de v[x] = find dans big v[x] index dans big;
        // meme index dans little est a mettre upper_bound begin et v.begin + [x]
    }
    std::cout << "V apres upper bound= ";
    for (size_t b = 0; b < v.size(); b++){
        std::cout << v[b] << " ";
    }
    std::cout << std::endl;
    //v = big;
}

std::vector<int> vJacobsthal(int size){
    std::vector<int> jacob;
    jacob.push_back(1);
    for (int i = 1; i < size + 1; i++){
        int next = jacob[i] + 2 * jacob[i - 1];
        jacob.push_back(next);
    }
}

void sortD(std::deque<int>& d){
    (void) d;
    usleep(1);
}

//1 3 2 5 4

