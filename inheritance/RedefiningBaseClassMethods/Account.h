#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

class Account {
    //declares a friend function that overloads the << operator for the Account class, 
    //allowing you to use this operator to output the details of an Account object to an output stream like std::cout.
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    double balance;
public:
    Account();
    Account(double balance);     

    void deposit(double amount); 
    void withdraw(double amount);
};

#endif // _ACCOUNT_