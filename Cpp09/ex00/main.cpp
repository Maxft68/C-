/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:14:22 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/20 11:12:24 by max              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    
    // (void) argc;
    if (argc != 2)
        return (std::cout << "Error: argv[1] need to be the input.txt" << std::endl, 1);
    
    BitcoinExchange Exchange;
    std::ifstream file(argv[1]);
    if (!file.is_open()){
        return (std::cerr << "Error: could not open file." << std::endl, 1);
    }
    
    std::string str_txt;
    Exchange.receivData(); // stock tout dans ma map
    Exchange.exctractArgs(file); //lis chaque ligne de mon fichier en argument

    file.close();
    
    return 0;
}
