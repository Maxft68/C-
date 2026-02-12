/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:20:03 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/12 20:35:32 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

#define PRECISION(float) std::fixed << std::setprecision(2) << float // Force l'affichage en decimal et 2decimal apres la virgule.

BitcoinExchange::BitcoinExchange() : _nbBtc(0), _Day("") {}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
    (void) copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other){
    (void) other;
	return *this;
}

void BitcoinExchange::receivData(){
    std::ifstream file("data.csv");
    if (!file.is_open()){
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string str_csv;
    std::getline(file, str_csv);
    while (std::getline(file, str_csv)){
        
        std::string day = str_csv.substr(0, 10);
        std::cout << "DAY = " << day << std::endl;
        std::string priceS = str_csv.substr(11, str_csv.length() - 1);
        double price = strtod(priceS.c_str(), NULL);
    
        _Data.insert(std::make_pair(day, price)); // OU _Data[day] = price;

        //std::cout << "verif dans map day= " << PRECISION(_Data.at(day)) << " : " << _Data[day] << std::endl;
        std::cout << "verif dans map day= " << _Data.at(day) << " : " << _Data[day] << std::endl;
    }
    file.close();

    //TEST REMPLISSAGE CONTAINER
    int i = 0;
    for (std::map<std::string, double>::iterator it = _Data.begin(); it!= _Data.end(); it++){
        i++;
        std::cout << i + 1 << " day:" << it->first << ":price:" << it->second << ":" << std::endl;
    }

}

void BitcoinExchange::parseString(std::string& string){
    std::cout << "string = " << string << std::endl;
    std::cout << "string length = " << string.length() << std::endl;
    size_t pos = string.find('|');
    std::cout << "pos = " << pos << std::endl;
    if (pos == std::string::npos)
        std::cout << "Error: bad input => " << string << std::endl;
    else{
        _Day = string.substr(0, pos - 1);
        std::cout << "DAYYYYYY=" << _Day << ":" << std::endl;
        char *end = NULL;
        
        std::string nb = string.substr(pos + 1, string.length() - 1);
        std::cout << "nb STRING = " << nb << std::endl;
        _nbBtc = strtol(nb.c_str(), &end, 10);
        
        std::cout << "nbtc= " << _nbBtc << std::endl;
        std::cout << "result: " << _nbBtc * _Data.at(_Day) << std::endl;
        //_nbBtc = strtol(std::string.substr(pos + 1, string.length() - 1), &end, 10);
        
        
    }
}

void BitcoinExchange::exctractArgs(std::ifstream& file){
    std::string str;
    while (std::getline(file, str)){
        parseString(str);
    }
}
