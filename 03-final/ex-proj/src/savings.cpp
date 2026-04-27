#include "savings.h"
#include <iostream>

Savings::Savings(const std::string &name, float balance, float rate) :
    Account(name, balance), m_Rate(rate)
{
}

Savings::~Savings()
{

}

float Savings::GetInterestRate()
{
    return m_Rate;
}

void Savings::AccumulateInterest()
{
    std::cout << "Hello" << std::endl;
    m_Balance += (m_Balance * m_Rate);
}
