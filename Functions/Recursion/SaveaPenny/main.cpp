// In this exercise you will create a program that calculates the total_amount of money that will be accumulated 
//if you start with a penny and double it everyday for n number of days.

// E.g.

// Day 1: $0.01

// Day 2: $0.02

// Day 3: $0.04

// . . .

// . . .

// . . .

// Day 16: $327.68

// Day 17: $655.36

// Day 18: $1310.72

#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

double a_penny_doubled_everyday(int, double amount = 0.01);

void amount_accumulated() {

    double total_amount = a_penny_doubled_everyday(25);
    
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int n, double amount) {
    function_activation_count++;

    if (n <= 1)
        return amount;
    return a_penny_doubled_everyday(--n, amount*2);

}

int test_function_activation_count() {
    return function_activation_count;
}