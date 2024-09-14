#ifndef LION_H
#define LION_H
#include "Animal.h"

class Lion : public Animal {
public:
    std::string get_noise() override;
    int get_num_legs() override;
};

#endif