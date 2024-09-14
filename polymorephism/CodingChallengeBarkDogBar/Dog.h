#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal{

public:
    Dog(const std::string& name, int age) 
       : Animal(name, age){}

    std::string get_noise() override;
    int get_num_legs() override;
};

#endif /* DOG_H */