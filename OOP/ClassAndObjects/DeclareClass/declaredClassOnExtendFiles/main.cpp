#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank Account");
    frank_account.set_balance(20000);

    if (frank_account.deposit(200.0))
    {
        cout << "Deposit is ok" << endl;
    }
    else
    {
        cout << "Deposit is not alllowed" << endl;
    }

    if (frank_account.withdraw(10000.0))
    {
        cout << "withdraw is ok" << endl;
    }
    else
    {
        cout << "Not sufficiend funds" << endl;
    }

    frank_account.deposit(2000);
    frank_account.withdraw(1000);

    Account jim_account;

       return 0;
};