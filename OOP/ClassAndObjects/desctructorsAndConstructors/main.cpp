#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(string name_val)
    {
        name = name_val;
    }
    string get_name(){
        return name;
    };
    // Default coonstructor
    // Player()
    // {
    //     name = "None";
    //     health = 100;
    //     exp = 3;
    // };
    Player(string name_val = "Unkwnon", int helth_val = 100, int exp_val= 2){
        name = name_val;
        health = helth_val;
        xp = exp_val;
    };
    
};

int main()
{

    Player slayer("Asen", 100, 3);
    slayer.set_name("Slayer");

    Player frank("Frankulus", 1000, 32);
    frank.set_name("Frank");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villain("Villain", 100, 12);
    villain.set_name("Villain");

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}
