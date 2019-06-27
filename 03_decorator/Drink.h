#pragma once
#include <string>

class Drink {
public:
    virtual std::string getDescription() = 0;
    virtual int getCost() = 0;
};