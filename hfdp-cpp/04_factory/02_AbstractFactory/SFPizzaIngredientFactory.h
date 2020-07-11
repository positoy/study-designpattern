#pragma once
#include "PizzaIngredientFactory.h"

class SFPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    std::string createDough();
    std::vector<std::string> createToppings();
};