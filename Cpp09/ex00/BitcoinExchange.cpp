/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: max <max@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:20:03 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/13 17:42:49 by max              ###   ########.fr       */
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
        //std::cout << "DAY = " << day << std::endl;
        std::string priceS = str_csv.substr(11, str_csv.length() - 1);
        double price = strtod(priceS.c_str(), NULL);
    
        _Data.insert(std::make_pair(day, price)); // OU _Data[day] = price;

        //std::cout << "verif dans map day= " << PRECISION(_Data.at(day)) << " : " << _Data[day] << std::endl;
        //std::cout << "verif dans map day= " << _Data.at(day) << " : " << _Data[day] << std::endl;
    }
    file.close();

    //TEST REMPLISSAGE CONTAINER
    // int i = 0;
    // for (std::map<std::string, double>::iterator it = _Data.begin(); it!= _Data.end(); it++){
    //     i++;
    //     std::cout << i + 1 << " day:" << it->first << ":price:" << it->second << ":" << std::endl;
    // }

}

void BitcoinExchange::parseString(std::string& string){

    size_t pos = string.find('|');

    if (pos == std::string::npos){
        std::cout << "Error: bad input => " << string << std::endl;
        return;
    }
    else{
        _Day = string.substr(0, pos - 1);
        if (_Day.length() != 10 || _Day[4] != '-' || _Day[7] != '-'){
            std::cout << "Error: bad format date =>" <<  _Day << std::endl;
            return;
        }
        std::string year = _Day.substr(0, 4);
        std::string month = _Day.substr(5, 2);
        std::string day = _Day.substr(8, 2);
        
        int intYear, intMonth, intDay;
        std::istringstream issYear(year), issMonth(month), issDay(day); //converti les string en int avec verification qu'il ne reste pas de caractere non int.
        if (!(issYear >> intYear) || !issYear.eof() || !(issMonth >> intMonth) || !issMonth.eof() || !(issDay >> intDay) || !issDay.eof()){
            std::cout << "Error: bad format date =>" <<  _Day << std::endl;
            return;
        }

        
        if (intYear < 0 || intMonth > 12 || intMonth < 1 || intDay > 31 || intDay < 1){
            std::cout << "Error: date does'nt exist" <<  _Day << std::endl;
            return;
        }
        
        if (intDay == 31 && (intMonth == 4 || intMonth == 6 || intMonth == 9 || intMonth == 1)){
            std::cout << "Error: date does'nt exist" <<  _Day << std::endl;
            return;
        }
        if (intMonth == 2){
            int maxDays = 28;
            if (intYear % 4 == 0 && (intYear % 100 != 0 || intYear % 400 == 0))
                maxDays = 29;
            if (intDay > maxDays){
                std::cout << "Error: date does'nt exist (bissextile month ?)" <<  _Day << std::endl;
                return;
            }
                
        }
        
        std::string nbString = string.substr(pos + 1);
        std::istringstream iss(nbString);
        if (!(iss >> _nbBtc) || !iss.eof()) {
            std::cout << "Error: bad input => " << string << std::endl;
            return;
        }

        if (_nbBtc < 0) {
            std::cout << "Error: not a positive number" << std::endl;
            return;
        }

        if (_nbBtc > 1000) {
            std::cout << "Error: too large a number" << std::endl;
            return;
        }

        std::map<std::string, double>::iterator it = _Data.lower_bound(_Day);
        if (it != _Data.begin() && (it == _Data.end() || it->first != _Day))
            it--;
        if (it != _Data.end() && it != _Data.begin())
            std::cout << _Day << " => " << _nbBtc << " = " <<  _nbBtc * it->second << std::endl;
        else
            std::cout << "Error: date too old" << std::endl;
        // lower_bound returns the first element >= key. 
        // If it's not an exact match, and not the beginning, we might need the previous element
        //_nbBtc = strtol(std::string.substr(pos + 1, string.length() - 1), &end, 10);
    }
}

void BitcoinExchange::exctractArgs(std::ifstream& file){
    std::string str;
    while (std::getline(file, str)){
        parseString(str);
    }
}
