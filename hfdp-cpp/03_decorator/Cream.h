#pragma once
#include "Drink.h"

class Cream : public Drink {
public:
    Cream(Drink* _drink);
    std::string getDescription();
    int getCost();
protected:
    Drink* drink;
    int cost;
    std::string description;
};