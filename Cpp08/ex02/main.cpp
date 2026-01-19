/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:22:14 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/19 13:59:18 by mdsiurds         ###   ########.fr       */
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
    
    std::list<int> list;
    list.push_front(5);
    list.push_front(17);
    std::cout << "top: " << *list.begin() << std::endl;
    std::cout << "top2: " << list.front() << std::endl;
    
    // IMPOSSIBLE with container Stack ! std::stack<int>::iterator itS = s.std::deque<int>::iterator::begin();


    
    // std::cout << std::endl << "----------TEST WITH OTHER CONTAINER----------" << std::endl;

    // MutantStack<int> Mutant;
    // Mutant.push(42);
    // Mutant.push(74);
    // Mutant.push(45);

    // MutantStack<int>::iterator begin = Mutant.begin();
    // std::cout << *begin <<std::endl;
    // *begin = 65;
    // std::cout << *begin <<std::endl;

    // MutantStack<int> Jean(Mutant);

    // MutantStack<int>::const_iterator cbegin = Jean.cbegin();
    // std::cout << *cbegin << std::endl;
    // // IMPOSSIBLE *cbegin = 42;
    

    return 0;
}