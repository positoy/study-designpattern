#pragma once
#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
        std::string createDough();
        std::vector<std::string> createToppings();
};