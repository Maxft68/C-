/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:17:34 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/23 08:59:14 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip>

class BitcoinExchange{
    public:
        void parse(const std::string &str);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &other);
    
    private:
        std::map<std::string, double> _Data;
};