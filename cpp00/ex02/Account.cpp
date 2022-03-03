/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofelipe <jofelipe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:32:02 by jofelipe          #+#    #+#             */
/*   Updated: 2022/03/03 00:31:52 by jofelipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {
	Account::_nbAccounts += 1;
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::Account(int deposit) {
	Account::_nbAccounts += 1;
	Account::_totalAmount += deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
	this->_amount = deposit;
}

Account::~Account(void) {
	Account::_totalAmount -= this->_amount;
	Account::_nbAccounts -= 1;
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
	Account::_totalNbDeposits += 1;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (withdrawal > this->_amount)
		return false;
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	return true;
}


void Account::displayAccountsInfos(void) {
	std::cout << "Number of accounts   : "
			  << Account::_nbAccounts << std::endl
			  << "Total amount         : "
			  << Account::_totalAmount << std::endl
			  << "Number of deposits   : "
			  << Account::_totalNbDeposits << std::endl
			  << "Number of withdrawals: "
			  << Account::_totalNbWithdrawals << std::endl;
	// displayStatus();
}

void Account::displayStatus(void) const{
	std::cout << "Status               : Active" << std::endl;
}
