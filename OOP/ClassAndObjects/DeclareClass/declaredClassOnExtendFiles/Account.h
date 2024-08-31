#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account
{
private:
    // attributes
    std::string name{"Account"};
    double balance{0.0};

public:
    // methods declare inline
    void set_balance(double bal) { balance - bal; };
    double get_balance() { return balance; };

    // methods will be declared outside the class declaration
    void set_name(std::string s);
    std::string get_name();

    // methods
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif
