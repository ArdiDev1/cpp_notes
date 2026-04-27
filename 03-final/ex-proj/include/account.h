#pragma once
#include <string>
class Account {
private:
    std::string m_Name;
    int m_AccNo;
    static int m_ANGenerate;

protected:
    float m_Balance;
    
public:
    Account() = default;
    Account(const std::string& name, float init_balance);
    ~Account() = default;

    const std::string GetName()const;
    float GetBalance()const;
    int GetAccountNo()const;

    virtual float GetInterestRate() = 0;
    virtual void AccumulateInterest() = 0;

    void Withdraw(float amount);
    void Deposit(float amount);
};