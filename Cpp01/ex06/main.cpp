/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:45:54 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/11/17 17:51:50 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	
	if (argc != 2){
		std::cout << "Error, use like this: ./harlFilter [Argument]" << std::endl;
		return(1);
	}

	Harl harl;
	std::string filter[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	
	for (int i = 0; i < 5; i++){
		if (argv[1] == filter[i] || i == 4){
			switch(i){
				case 0:
					harl.complain("DEBUG");
					/* fallthrough */
				case 1:
					harl.complain("INFO");
					/* fallthrough */
				case 2:
					harl.complain("WARNING");
					/* fallthrough */
				case 3:
					harl.complain("ERROR");
					break;
				default:
					std::cout << "What you say?" << std::endl;
					break;
			}
		}
	}

	return(0);
}

