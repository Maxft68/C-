/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:20:03 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/23 09:04:06 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
    (void) copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){
    (void) other;
	return *this;
}

void BitcoinExchange::parse(const std::string &str){
    (void) str;
    std::ifstream file("data.csv");
    if (!file.is_open()){
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string str_csv;
    std::getline(file, str_csv);
    while (std::getline(file, str_csv)){
        std::string date = str_csv.substr(0, 10);
        std::string price = str_csv.substr(11, str_csv.length() - 1);
        // std::cout << "date: " << date << std::endl;
        // std::cout << "price: " << price << std::endl;
        _Data[date] = strtod(price.c_str(), NULL);
        //std::cout << "verif dans map date= " << std::fixed << std::setprecision(2) << _Data[date] << std::endl;
        
        
    }
    for (std::map<std::string, double>::iterator it = _Data.begin(); it!= _Data.end(); it++){
        std::cout << "date: " << it->first << "   price: " << it->second << std::endl;
    }
}
