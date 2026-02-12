/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:17:34 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/02/12 19:07:58 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <iomanip>

class BitcoinExchange{
    private:
        std::map<std::string, double> _Data;
        long int _nbBtc;
        std::string _Day;
        

    public:
        void    receivData();   //rempli map _Data
        void    exctractArgs(std::ifstream& file); //recupere le file donnee en argument
        void    parseString(std::string& string);
        void    parseDate();    //verifie la date
        void    parseValue();   //verifie le nb de btc
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &other);

};