/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:32:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 02:02:19 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << std::endl
			  << "ACCOUNT CREATED" << std::endl
			  << "Account ID: " << this->_accountIndex << std::endl
			  << "Amount    : " << this->_amount << std::endl
			  << std::endl;
}

Account::Account(int deposit) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_totalAmount += deposit;
	Account::_nbAccounts += 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = deposit;
	std::cout << std::endl
			  << "ACCOUNT CREATED" << std::endl
			  << "Account ID: " << this->_accountIndex << std::endl
			  << "Amount    : " << this->_amount << std::endl
			  << std::endl;
}

Account::~Account(void) {
	Account::_totalAmount -= this->_amount;
	Account::_nbAccounts -= 1;
	std::cout << std::endl
			  << "ACCOUNT CLOSED" << std::endl
			  << "Account ID: " << this->_accountIndex << std::endl
			  << "Amount    : " << this->_amount << std::endl
			  << std::endl;
}

int	Account::getNbAccounts(void) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (Account::_totalNbWithdrawals);
}

void Account::makeDeposit(int deposit) {
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (withdrawal > this->_amount)
		return false;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	return true;
}


void Account::displayAccountsInfos(void) {
	std::cout << std::endl
			  << "ALL ACCOUNTS INFOS"
			  << std::endl
			  << "Number of accounts   : "
			  << Account::_nbAccounts << std::endl
			  << "Total amount         : "
			  << Account::_totalAmount << std::endl
			  << "Number of deposits   : "
			  << Account::_totalNbDeposits << std::endl
			  << "Number of withdrawals: "
			  << Account::_totalNbWithdrawals << std::endl
			  << std::endl;
}

void Account::displayStatus(void) const{
	std::cout << std::endl
			  << "EXTRACT" << std::endl
			  << "Account ID           : " << this->_accountIndex << std::endl
			  << "Total amount         : " << this->_amount << std::endl
			  << "Number of deposits   : " << this->_nbDeposits << std::endl
			  << "Number of withdrawals: " << this->_nbWithdrawals << std::endl
			  << std::endl;
}
