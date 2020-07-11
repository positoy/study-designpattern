#pragma once
#include "Drink.h"

class Espresso : public Drink {
public:
    Espresso();
    std::string getDescription();
    int getCost();
protected:
    std::string description;
    int cost;
};