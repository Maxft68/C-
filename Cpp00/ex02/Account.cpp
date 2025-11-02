/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdsiurds <mdsiurds@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:11:24 by mdsiurds          #+#    #+#             */
/*   Updated: 2025/10/30 18:11:25 by mdsiurds         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string>

#define BLUE "\033[34m"
#define RESET "\033[0m"
#define BLUE_RESET(x) BLUE << (x) << RESET

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

std::string currentDateTime() {
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    char buffer[20];
    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", now);
    return (buffer);
}

void Account::_displayTimestamp( void ) {
    std::cout << "[" << currentDateTime() << "] ";
}

Account::Account ( int initial_deposit ){

    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << BLUE_RESET(this->_accountIndex) << ";amount:" << BLUE_RESET(initial_deposit)    << ";created" << std::endl;

}
 
Account::~Account( void ){
    _displayTimestamp();
    std::cout << "index:" << BLUE_RESET(this->_accountIndex) << ";amount:" << BLUE_RESET(this->_amount) 
        << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;
}

int	Account::getNbAccounts( void ){
    return (_nbAccounts);
}

int	Account::getTotalAmount( void ){
    return (_totalAmount);
}

int	Account::getNbDeposits( void ){
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void ){

    _displayTimestamp();
    std::cout << "accounts:" << BLUE_RESET(getNbAccounts()) << ";total:" << BLUE_RESET(getTotalAmount())
        << ";deposits:" << BLUE_RESET(getNbDeposits()) << ";withdrawals:" << BLUE_RESET(getNbWithdrawals()) << std::endl;
}

void Account::makeDeposit( int deposit ){

    _displayTimestamp();
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << "index:" << BLUE_RESET(this->_accountIndex) << ";p_amount:" << BLUE_RESET(this->_amount - deposit)
        << ";deposit:" << BLUE_RESET(deposit) << ";amount:" << BLUE_RESET(this->_amount) << ";nb_deposits:" << BLUE_RESET(_nbDeposits) << std::endl;
}

bool Account::makeWithdrawal (int withdrawal){

    _displayTimestamp();
    if (withdrawal > this->_amount){
        std::cout << "index:" << BLUE_RESET(this->_accountIndex) << ";p_amount:" << BLUE_RESET(this->_amount)
            << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "index:" << BLUE_RESET(this->_accountIndex) << ";p_amount:" << BLUE_RESET(this->_amount + withdrawal)
         << ";withdrawals:" << BLUE_RESET(withdrawal) <<";amount:" << BLUE_RESET(this->_amount) << ";nb_withdrawal:" << BLUE_RESET(_nbWithdrawals) << std::endl;
    return (true);
}

int Account::checkAmount( void ) const {
    return (this->_amount);
}

void Account::displayStatus( void ) const {

    _displayTimestamp();
    std::cout << "index:" << BLUE_RESET(this->_accountIndex) << ";amount:" << BLUE_RESET(this->_amount) 
        << ";deposits:" << BLUE_RESET(this->_nbDeposits) << ";withdrawals:" << BLUE_RESET(this->_nbWithdrawals) << std::endl;
}
