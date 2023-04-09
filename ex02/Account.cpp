#include "Account.hpp"
#include <iostream>

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

//[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6

void    Account::displayAccountsInfos(void)
{
    std::cout << "account:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposit:" << getNbDeposits() << ";";
    std::cout << "withdrawal:" << getNbWithdrawals() << "\n";
}

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int		Account::checkAmount(void) const
{

}

// [19920104_091532] index:6;amount:763;deposits:1;withdrawals:0
void	Account::displayStatus(void) const
{
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << "\n";
}
