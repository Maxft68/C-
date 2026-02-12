/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:14:22 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/12 19:19:14 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    
    (void) argc;
    // if (argc != 2)
    //     return (std::cout << "Error: could not open file." << std::endl, 1);
    
    BitcoinExchange Exchange;
    std::ifstream file(argv[1]);
    if (!file.is_open()){
        return (std::cerr << "Error: could not open file." << std::endl, 1);
    }
    
    std::string str_txt;
    // /std::getline(file, str_txt);
    //std::cout << "str_txt = " << str_txt << std::endl;
    Exchange.receivData();
    Exchange.exctractArgs(file);
        //std::cout << str << std::endl;
    file.close();
    
    return 0;
}
