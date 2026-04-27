#include <iostream>
#include "savings.h"

using std::cout, std::endl;

int main() {
    Account* account = new Savings("Ardi", 1.3, 2.1);
    cout << account->GetBalance() << endl;
    account->Deposit(200);
    account->AccumulateInterest();
    account->Withdraw(300);
    cout << "Balance: " << account->GetBalance() << endl;
}