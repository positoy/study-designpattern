#pragma once
#include <string>
#include <vector>

class PizzaIngredientFactory {
public:
    virtual std::string createDough() = 0;
    virtual std::vector<std::string> createToppings() = 0;
};