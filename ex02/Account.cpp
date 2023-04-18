#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_nbAccounts++;
    _accountIndex = _nbAccounts - 1;
	_totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	_nbAccounts--;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";closed\n";
}

int    Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int    Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int    Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int    Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_totalAmount += deposit;
	_totalNbDeposits += 1;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
	_amount += deposit;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
	_nbDeposits += 1;
    std::cout << "nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
	if (withdrawal > checkAmount())
	{
    	std::cout << "refused\n";
		return (false);
	}
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << withdrawal << ";amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

void	Account::_displayTimestamp(void)
{
	time_t  timer_now;
    tm      *timer_start;
 
    time(&timer_now);
    timer_start = std::localtime(&timer_now);
    std::cout << "[" << timer_start->tm_year + 1900 <<
	std::setw(2) << std::setfill('0') << timer_start->tm_mon + 1 << 
	std::setw(2) << std::setfill('0') << timer_start->tm_mday << "_" << 
	std::setw(2) << std::setfill('0') << timer_start->tm_hour << 
	std::setw(2) << std::setfill('0') << timer_start->tm_min << 
	std::setw(2) << std::setfill('0') << timer_start->tm_sec << "] ";
}

int		Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << "\n";
}