#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
    // attributes
    string name{"Player"};
    int health{100};
    int xp{3};

public:
    // methods
    void talk(string talk_to_say)
    {
        cout << name << "says" << talk_to_say << endl;
    };
    bool is_dead();
};

class Account
{
private:
    // attributes
    string name{"Account"};
    double balance{0.0};

public:
    // methods declare inline
    void set_balance(double bal) { balance - bal; };
    double get_balance() { return balance; };

    // methods will be declared outside the class declaration
    void set_name(string s);
    string get_name();

    // methods
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name = n;
};

string Account::get_name()
{
    return name;
};

bool Account::deposit(double amount)
{
    balance += amount;
    return true;
};

bool Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
    {
        return false;
    }
};

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

    Player frank;
    // frank.name = "Frank";
    // frank.health = 35;
    // frank.xp = 12;
    frank.talk("Hello there");

    Player *enemy = new Player;
    // (*enemy).name = "Enemy";
    // enemy->xp = 15;
    enemy->talk("i will destroy you");

    Player hero;
    Player players[]{frank, hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;
};