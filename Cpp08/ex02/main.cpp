/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:22:14 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 13:38:33 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << std::endl << "----------TEST FROM SUBJECT PDF----------" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);


    
    std::cout << std::endl << "----------TEST WITH LIST----------" << std::endl;
    
    std::list<int> listA;
    listA.push_back(5);
    listA.push_back(17);
    std::cout << "top: " << listA.back() << std::endl;
    listA.pop_back();
    std::cout << "size: " << listA.size() << std::endl;
    listA.push_back(3);
    listA.push_back(5);
    listA.push_back(737);
    listA.push_back(0);
    std::list<int>::iterator listAIt = listA.begin();
    std::list<int>::iterator listAIter = listA.end();
    ++listAIt;
    --listAIt;
    
    for (; listAIt != listAIter; listAIt++){
        std::cout << *listAIt << std::endl;
    }

    std::cout << std::endl << "----------TEST WITH OTHER CONTAINER----------" << std::endl;

    MutantStack<int> Mutant;
    Mutant.push(42);
    Mutant.push(74);
    Mutant.push(45);

    MutantStack<int>::iterator begin = Mutant.begin();
    std::cout << "*begin =" << *begin <<std::endl;
    *begin = 65;
    std::cout << "*begin after assignation= " << *begin <<std::endl;

    MutantStack<int> Jean(Mutant); //copy de mutant

    MutantStack<int>::const_iterator cbegin = Jean.cbegin();
    std::cout << *cbegin << std::endl;
    //*cbegin = 42; // IMPOSSIBLE de modifier un const iterator

    return 0;
}