/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:16:57 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/24 16:45:48 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int argc, char **argv){
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(-1);
	}
	for (int j = 1; argv[j]; j++){
		for (int i = 0; argv[j][i]; i++){
			std::cout << (char)std::toupper(argv[j][i]);
		}
	}
	std::cout << std::endl; //std::cout << "\n";
}