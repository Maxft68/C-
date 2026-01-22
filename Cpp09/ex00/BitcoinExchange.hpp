/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 11:17:34 by mdsiurds          #+#    #+#             */
/*   Updated: 2026/01/22 14:52:34 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <fstream>
#include <string>

class BitcoinExchange{
    public:
        void parse(const std::string &str);
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange& operator=(const BitcoinExchange &other);
    
    private:
        std::map<std::string, float> _Data;
};