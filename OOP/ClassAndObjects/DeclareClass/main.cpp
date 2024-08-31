#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    public:
        // attributes
        string name{"Player"};
        int health{100};
        int xp{3};

        // methods
        void talk(string talk_to_say){
            cout << name << "says" << talk_to_say << endl;
        };
        bool is_dead();
};

class Account
{
    public:
        // attributes
        string name{"Account"};
        double balance{0.0};

        // methods
        bool deposit(double bal){balance += bal; cout << "In deposit" << endl;};
        bool withdraw(double bal){balance -= bal; cout << "In deposit" << endl;};
};

int main()
{
    Account frank_account;
    frank_account.name = "Frank account";
    frank_account.balance = 5000;

    frank_account.deposit(2000);
    frank_account.withdraw(1000);

    Account jim_account;

    Player frank;
    frank.name = "Frank";
    frank.health = 35;
    frank.xp = 12;
    frank.talk("Hello there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    enemy->xp = 15;
    enemy->talk("i will destroy you");

    Player hero;
    Player players[]{frank, hero};

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;
};