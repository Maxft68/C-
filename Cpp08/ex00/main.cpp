/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 08:53:22 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/12 13:13:22 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <stack>
#include <deque>

int main(){
	

	// std::vector<int> a;

	// for (int i = 0; i < 5; i++){
	// 	a.push_back(i);
	// }

	// for (int j = 0; j < 5; j++){
	// 	std::cout << a[j] << " ";
	// }

	// try {
	// 	std::vector<int>::iterator b = easyfind(a, 5);
	// 	std::cout << "J'ai trouve : " << *b << std::endl;
	// } catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	

	// std::list<int> list;

	// for (int i = 0; i < 5; i++)
	// 	list.push_back(i);

	// std::list<int>::iterator javance;

	// for(javance = list.begin(); javance != list.end(); javance++){
	// 	std::cout << *javance << " ";
	// }

	// std::cout << "Je cherche.." << std::endl;
	
	// try {
	// 	std::list<int>::iterator result = easyfind(list, 2);
	// 	std::cout << *result << std::endl;
	// } catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }

	std::deque<int> D;

	for (int i = 0; i < 10; i++){
		D.push_back(i*10);
	}

	for (size_t j = 0; j < D.size(); j++){
		std::cout << D[j] << " ";
	}
	std::cout << std::endl;
	
	try{
		std::deque<int>::iterator find = easyfind(D, 40);
		std::cout << "We found the number: " << *find << std::endl;
		
		std::deque<int>::iterator find2 = easyfind(D, 142);
		std::cout << "We don't found..." << *find2 << std::endl;
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	};
	// std::deque<int>::iterator iter = D.begin();

	// for (; iter != D.end(); iter++){
	// 	std::cout << *iter << " ";
	// }
	// std::cout << std::endl;
	
	// try{
	// 	std::deque<int>::iterator find = easyfind(D, 40);
	// 	std::cout << find
	// }
	
}
