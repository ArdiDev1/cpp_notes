#include "account.h"
#include <iostream>

int Account::m_ANGenerate = 1000;

Account::Account(const std::string &name, float init_balance) :
m_Name(name) , m_Balance(init_balance)
{
    m_AccNo = ++m_ANGenerate;
}

const std::string Account::GetName() const
{
    return m_Name;
}

float Account::GetBalance() const
{
    return m_Balance;
}

int Account::GetAccountNo() const
{
    return m_AccNo;
}

void Account::Withdraw(float amount)
{
    if(amount < m_Balance)
        m_Balance -= amount;
    else
        std::cout << "Not enough funds" << std::endl;
}

void Account::Deposit(float amount)
{
    m_Balance += amount;
}
