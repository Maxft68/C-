/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:45:54 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/17 15:46:57 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	
	if (argc != 2){
		std::cout << "./harlFilter [Argument]" << std::endl;
		return(1);
	}
		
	Harl couille;
	std::string filter[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	
	for (int i = 0; i < 5; i++){
		if (argv[1] == filter[i] || i == 4){
			switch(i){
				case 0:
					couille.complain("DEBUG");
				case 1:
					couille.complain("INFO");
				case 2:
					couille.complain("WARNING");
				case 3:
					couille.complain("ERROR");
					break;
				default:
					std::cout << "What you say?" << std::endl;
					break;
			}
		}
	}
	
	

	return(0);
}

// 	std::string a = "coucou";
// 	std::string b = "ABSOLUMEBT PAS";
// 	std::string c = "bla";
// 	std::string d = "BLA";

// 	std::string name[5] = {"coucou", "non", "oui", "bla"};


// 	int i = 0;
// 	while(i < 5){
// 		if (name[i] == a)
// 			break;
// 		i++;
// 	}
// 	switch (i){
// 		case 0:
// 			std::cout << "bravo" << std::endl;
// 			break;
// 		case 1:
// 			std::cout << "gg" << std::endl;
// 			break;
// 		default:
// 			std::cout << "fuck" << std::endl;
// 	}
// }