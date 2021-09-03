#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void){
}

Account::Account(int initial_deposit){
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

void	Account::makeDeposit(int deposit){
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";deposit:"<<deposit<<";amount:";
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout<<_amount<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	if (_amount - withdrawal >= 0){
		std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal<<";amount:";
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout<<_amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
		return (true);
	}
	else
		std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:refused"<<std::endl;
	return (false);
}

int		Account::checkAmount(void) const{
	return (_amount);
}

int		Account::getNbAccounts(void){
	return (_nbAccounts);
}

int		Account::getTotalAmount(void){
	return (_totalAmount);
}

int		Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout<<" accounts:"<<_nbAccounts<<";total:"<<_totalAmount<<";deposits:"<<_totalNbDeposits<<";withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals<<std::endl;
}

void	Account::_displayTimestamp(void){
	time_t now = time(0);
	tm *timeNow = localtime(&now);
	std::cout<<"["<<1900 + timeNow->tm_year;
	if (timeNow->tm_mon + 1 < 10)
		std::cout<<"0";
	std::cout<<timeNow->tm_mon + 1;
	if (timeNow->tm_mday < 10)
		std::cout<<"0";
	std::cout<<timeNow->tm_mday<<"_";
	if (timeNow->tm_hour < 10)
		std::cout<<"0";
	std::cout<<timeNow->tm_hour;
	if (timeNow->tm_min < 10)
		std::cout<<"0";
	std::cout<<timeNow->tm_min;
	if (timeNow->tm_sec < 10)
		std::cout<<"0";
	std::cout<<timeNow->tm_sec<<"]";
}