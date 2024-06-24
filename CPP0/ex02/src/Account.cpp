/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:34:36 by deordone          #+#    #+#             */
/*   Updated: 2024/06/25 01:56:26 by droied           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cstdio>

int Account::_nbAccounts(0);
int Account::_totalAmount(0);
int Account::_totalNbDeposits(0);
int Account::_totalNbWithdrawals(0);

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;	
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created" << std::endl;
}
	
Account::~Account( void )
{
	_displayTimestamp();
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount - deposit << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << _amount << ";"
		<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	if ((_amount - withdrawal) < 0)
	{
		std::cout << "p_amount:" << _amount << ";"
		<< "withdrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	std::cout << "p_amount:" << _amount + withdrawal << ";"
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << _amount << ";"
		<< "nb_whitdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

int	Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits:" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t;
	struct tm *ltime; 
	char buffer[80];
	
	std::time(&t);
	ltime = std::localtime(&t);

	strftime(buffer, 80, "%Y%m%d_%H%M%S", ltime);
	printf("[%s] ", buffer);
/*
    std::cout << "[" << 1900 + ltime->tm_year
		<< "0" << 1 + ltime->tm_mon
		<< ltime->tm_mday << "_"
		<< 5 + ltime->tm_hour
		<< 30 + ltime->tm_min
		<< ltime->tm_sec << "] ";*/
}
